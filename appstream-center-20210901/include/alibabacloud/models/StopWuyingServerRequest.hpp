// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPWUYINGSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPWUYINGSERVERREQUEST_HPP_
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
  class StopWuyingServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopWuyingServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(WuyingServerIdList, wuyingServerIdList_);
    };
    friend void from_json(const Darabonba::Json& j, StopWuyingServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(WuyingServerIdList, wuyingServerIdList_);
    };
    StopWuyingServerRequest() = default ;
    StopWuyingServerRequest(const StopWuyingServerRequest &) = default ;
    StopWuyingServerRequest(StopWuyingServerRequest &&) = default ;
    StopWuyingServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopWuyingServerRequest() = default ;
    StopWuyingServerRequest& operator=(const StopWuyingServerRequest &) = default ;
    StopWuyingServerRequest& operator=(StopWuyingServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr
        && return this->wuyingServerIdList_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline StopWuyingServerRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // wuyingServerIdList Field Functions 
    bool hasWuyingServerIdList() const { return this->wuyingServerIdList_ != nullptr;};
    void deleteWuyingServerIdList() { this->wuyingServerIdList_ = nullptr;};
    inline const vector<string> & wuyingServerIdList() const { DARABONBA_PTR_GET_CONST(wuyingServerIdList_, vector<string>) };
    inline vector<string> wuyingServerIdList() { DARABONBA_PTR_GET(wuyingServerIdList_, vector<string>) };
    inline StopWuyingServerRequest& setWuyingServerIdList(const vector<string> & wuyingServerIdList) { DARABONBA_PTR_SET_VALUE(wuyingServerIdList_, wuyingServerIdList) };
    inline StopWuyingServerRequest& setWuyingServerIdList(vector<string> && wuyingServerIdList) { DARABONBA_PTR_SET_RVALUE(wuyingServerIdList_, wuyingServerIdList) };


  protected:
    std::shared_ptr<bool> force_ = nullptr;
    std::shared_ptr<vector<string>> wuyingServerIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
