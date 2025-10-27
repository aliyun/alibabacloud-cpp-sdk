// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAEGISFORLINGJUNSTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAEGISFORLINGJUNSTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAegisForLingjunStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAegisForLingjunStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uuids, uuidsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAegisForLingjunStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uuids, uuidsShrink_);
    };
    ListAegisForLingjunStatusShrinkRequest() = default ;
    ListAegisForLingjunStatusShrinkRequest(const ListAegisForLingjunStatusShrinkRequest &) = default ;
    ListAegisForLingjunStatusShrinkRequest(ListAegisForLingjunStatusShrinkRequest &&) = default ;
    ListAegisForLingjunStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAegisForLingjunStatusShrinkRequest() = default ;
    ListAegisForLingjunStatusShrinkRequest& operator=(const ListAegisForLingjunStatusShrinkRequest &) = default ;
    ListAegisForLingjunStatusShrinkRequest& operator=(ListAegisForLingjunStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uuidsShrink_ == nullptr; };
    // uuidsShrink Field Functions 
    bool hasUuidsShrink() const { return this->uuidsShrink_ != nullptr;};
    void deleteUuidsShrink() { this->uuidsShrink_ = nullptr;};
    inline string uuidsShrink() const { DARABONBA_PTR_GET_DEFAULT(uuidsShrink_, "") };
    inline ListAegisForLingjunStatusShrinkRequest& setUuidsShrink(string uuidsShrink) { DARABONBA_PTR_SET_VALUE(uuidsShrink_, uuidsShrink) };


  protected:
    // List of unique UUIDs for Lingjun bare metal.
    std::shared_ptr<string> uuidsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
