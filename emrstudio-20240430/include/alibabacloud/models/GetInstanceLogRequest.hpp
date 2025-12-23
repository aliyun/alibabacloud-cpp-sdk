// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class GetInstanceLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(skipLineNum, skipLineNum_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(skipLineNum, skipLineNum_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    GetInstanceLogRequest() = default ;
    GetInstanceLogRequest(const GetInstanceLogRequest &) = default ;
    GetInstanceLogRequest(GetInstanceLogRequest &&) = default ;
    GetInstanceLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceLogRequest() = default ;
    GetInstanceLogRequest& operator=(const GetInstanceLogRequest &) = default ;
    GetInstanceLogRequest& operator=(GetInstanceLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr
        && return this->skipLineNum_ == nullptr && return this->workspaceId_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline GetInstanceLogRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // skipLineNum Field Functions 
    bool hasSkipLineNum() const { return this->skipLineNum_ != nullptr;};
    void deleteSkipLineNum() { this->skipLineNum_ = nullptr;};
    inline int64_t skipLineNum() const { DARABONBA_PTR_GET_DEFAULT(skipLineNum_, 0L) };
    inline GetInstanceLogRequest& setSkipLineNum(int64_t skipLineNum) { DARABONBA_PTR_SET_VALUE(skipLineNum_, skipLineNum) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetInstanceLogRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int64_t> limit_ = nullptr;
    std::shared_ptr<int64_t> skipLineNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
