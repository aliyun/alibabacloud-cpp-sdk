// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPLOGRIVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPLOGRIVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppLogRiverResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppLogRiverResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Stdout, stdout_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppLogRiverResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Stdout, stdout_);
    };
    GetEdgeContainerAppLogRiverResponseBody() = default ;
    GetEdgeContainerAppLogRiverResponseBody(const GetEdgeContainerAppLogRiverResponseBody &) = default ;
    GetEdgeContainerAppLogRiverResponseBody(GetEdgeContainerAppLogRiverResponseBody &&) = default ;
    GetEdgeContainerAppLogRiverResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppLogRiverResponseBody() = default ;
    GetEdgeContainerAppLogRiverResponseBody& operator=(const GetEdgeContainerAppLogRiverResponseBody &) = default ;
    GetEdgeContainerAppLogRiverResponseBody& operator=(GetEdgeContainerAppLogRiverResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->path_ == nullptr
        && this->requestId_ == nullptr && this->stdout_ == nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetEdgeContainerAppLogRiverResponseBody& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerAppLogRiverResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stdout Field Functions 
    bool hasStdout() const { return this->stdout_ != nullptr;};
    void deleteStdout() { this->stdout_ = nullptr;};
    inline bool getStdout() const { DARABONBA_PTR_GET_DEFAULT(stdout_, false) };
    inline GetEdgeContainerAppLogRiverResponseBody& setStdout(bool stdout) { DARABONBA_PTR_SET_VALUE(stdout_, stdout) };


  protected:
    // The log path of the container. It must be an absolute path that starts with a forward slash (/). You can use asterisks (\\*) and question marks (?) as wildcards.
    shared_ptr<string> path_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the standard output of the container is collected.
    shared_ptr<bool> stdout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
