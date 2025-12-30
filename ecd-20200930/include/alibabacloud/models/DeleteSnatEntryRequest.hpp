// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNATENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESNATENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteSnatEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnatEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnatEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
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
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->snatEntryId_ == nullptr && this->snatTableId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSnatEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // snatEntryId Field Functions 
    bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
    void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
    inline string getSnatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
    inline DeleteSnatEntryRequest& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


    // snatTableId Field Functions 
    bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
    void deleteSnatTableId() { this->snatTableId_ = nullptr;};
    inline string getSnatTableId() const { DARABONBA_PTR_GET_DEFAULT(snatTableId_, "") };
    inline DeleteSnatEntryRequest& setSnatTableId(string snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };


  protected:
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> snatEntryId_ {};
    // This parameter is required.
    shared_ptr<string> snatTableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
