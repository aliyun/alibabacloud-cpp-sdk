// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
    };
    GetEdgeContainerLogsRequest() = default ;
    GetEdgeContainerLogsRequest(const GetEdgeContainerLogsRequest &) = default ;
    GetEdgeContainerLogsRequest(GetEdgeContainerLogsRequest &&) = default ;
    GetEdgeContainerLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerLogsRequest() = default ;
    GetEdgeContainerLogsRequest& operator=(const GetEdgeContainerLogsRequest &) = default ;
    GetEdgeContainerLogsRequest& operator=(GetEdgeContainerLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->lines_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetEdgeContainerLogsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline int32_t getLines() const { DARABONBA_PTR_GET_DEFAULT(lines_, 0) };
    inline GetEdgeContainerLogsRequest& setLines(int32_t lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };


  protected:
    // The application ID, which can be obtained by calling the [ListEdgeContainerApps](~~ListEdgeContainerApps~~) operation.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The number of log entries to output.
    // 
    // This parameter is required.
    shared_ptr<int32_t> lines_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
