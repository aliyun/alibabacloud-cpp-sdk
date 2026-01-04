// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNATENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESNATENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteSnatEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnatEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnatEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
    };
    DeleteSnatEntryRequest() = default ;
    DeleteSnatEntryRequest(const DeleteSnatEntryRequest &) = default ;
    DeleteSnatEntryRequest(DeleteSnatEntryRequest &&) = default ;
    DeleteSnatEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnatEntryRequest() = default ;
    DeleteSnatEntryRequest& operator=(const DeleteSnatEntryRequest &) = default ;
    DeleteSnatEntryRequest& operator=(DeleteSnatEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snatEntryId_ == nullptr; };
    // snatEntryId Field Functions 
    bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
    void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
    inline string getSnatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
    inline DeleteSnatEntryRequest& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


  protected:
    // The ID of the SNAT entry that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> snatEntryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
