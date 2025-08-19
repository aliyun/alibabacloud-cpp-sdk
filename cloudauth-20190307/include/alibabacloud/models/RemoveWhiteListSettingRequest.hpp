// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEWHITELISTSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEWHITELISTSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class RemoveWhiteListSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveWhiteListSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveWhiteListSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
    };
    RemoveWhiteListSettingRequest() = default ;
    RemoveWhiteListSettingRequest(const RemoveWhiteListSettingRequest &) = default ;
    RemoveWhiteListSettingRequest(RemoveWhiteListSettingRequest &&) = default ;
    RemoveWhiteListSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveWhiteListSettingRequest() = default ;
    RemoveWhiteListSettingRequest& operator=(const RemoveWhiteListSettingRequest &) = default ;
    RemoveWhiteListSettingRequest& operator=(RemoveWhiteListSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ids_ != nullptr
        && this->serviceCode_ != nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> ids() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline RemoveWhiteListSettingRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline RemoveWhiteListSettingRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline RemoveWhiteListSettingRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


  protected:
    // IDs of the whitelist to be deleted in bulk.
    std::shared_ptr<vector<int64_t>> ids_ = nullptr;
    // ServiceCode for the real person cloud product, only value: **antcloudauth**.
    std::shared_ptr<string> serviceCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
