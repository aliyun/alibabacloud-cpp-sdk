// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTWUYINGSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTWUYINGSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class RestartWuyingServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartWuyingServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WuyingServerIdList, wuyingServerIdList_);
    };
    friend void from_json(const Darabonba::Json& j, RestartWuyingServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WuyingServerIdList, wuyingServerIdList_);
    };
    RestartWuyingServerRequest() = default ;
    RestartWuyingServerRequest(const RestartWuyingServerRequest &) = default ;
    RestartWuyingServerRequest(RestartWuyingServerRequest &&) = default ;
    RestartWuyingServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartWuyingServerRequest() = default ;
    RestartWuyingServerRequest& operator=(const RestartWuyingServerRequest &) = default ;
    RestartWuyingServerRequest& operator=(RestartWuyingServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wuyingServerIdList_ == nullptr; };
    // wuyingServerIdList Field Functions 
    bool hasWuyingServerIdList() const { return this->wuyingServerIdList_ != nullptr;};
    void deleteWuyingServerIdList() { this->wuyingServerIdList_ = nullptr;};
    inline const vector<string> & wuyingServerIdList() const { DARABONBA_PTR_GET_CONST(wuyingServerIdList_, vector<string>) };
    inline vector<string> wuyingServerIdList() { DARABONBA_PTR_GET(wuyingServerIdList_, vector<string>) };
    inline RestartWuyingServerRequest& setWuyingServerIdList(const vector<string> & wuyingServerIdList) { DARABONBA_PTR_SET_VALUE(wuyingServerIdList_, wuyingServerIdList) };
    inline RestartWuyingServerRequest& setWuyingServerIdList(vector<string> && wuyingServerIdList) { DARABONBA_PTR_SET_RVALUE(wuyingServerIdList_, wuyingServerIdList) };


  protected:
    // The list of workstation IDs.
    std::shared_ptr<vector<string>> wuyingServerIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
