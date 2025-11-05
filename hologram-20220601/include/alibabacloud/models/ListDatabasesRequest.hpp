// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListDatabasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(external, external_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(external, external_);
    };
    ListDatabasesRequest() = default ;
    ListDatabasesRequest(const ListDatabasesRequest &) = default ;
    ListDatabasesRequest(ListDatabasesRequest &&) = default ;
    ListDatabasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesRequest() = default ;
    ListDatabasesRequest& operator=(const ListDatabasesRequest &) = default ;
    ListDatabasesRequest& operator=(ListDatabasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->external_ == nullptr; };
    // external Field Functions 
    bool hasExternal() const { return this->external_ != nullptr;};
    void deleteExternal() { this->external_ = nullptr;};
    inline bool external() const { DARABONBA_PTR_GET_DEFAULT(external_, false) };
    inline ListDatabasesRequest& setExternal(bool external) { DARABONBA_PTR_SET_VALUE(external_, external) };


  protected:
    std::shared_ptr<bool> external_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
