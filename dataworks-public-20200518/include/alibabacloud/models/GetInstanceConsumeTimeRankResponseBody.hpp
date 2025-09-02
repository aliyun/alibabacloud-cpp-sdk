// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCECONSUMETIMERANKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCECONSUMETIMERANKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRank.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceConsumeTimeRankResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceConsumeTimeRankResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceConsumeTimeRank, instanceConsumeTimeRank_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceConsumeTimeRankResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceConsumeTimeRank, instanceConsumeTimeRank_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceConsumeTimeRankResponseBody() = default ;
    GetInstanceConsumeTimeRankResponseBody(const GetInstanceConsumeTimeRankResponseBody &) = default ;
    GetInstanceConsumeTimeRankResponseBody(GetInstanceConsumeTimeRankResponseBody &&) = default ;
    GetInstanceConsumeTimeRankResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceConsumeTimeRankResponseBody() = default ;
    GetInstanceConsumeTimeRankResponseBody& operator=(const GetInstanceConsumeTimeRankResponseBody &) = default ;
    GetInstanceConsumeTimeRankResponseBody& operator=(GetInstanceConsumeTimeRankResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceConsumeTimeRank_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceConsumeTimeRank Field Functions 
    bool hasInstanceConsumeTimeRank() const { return this->instanceConsumeTimeRank_ != nullptr;};
    void deleteInstanceConsumeTimeRank() { this->instanceConsumeTimeRank_ = nullptr;};
    inline const GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRank & instanceConsumeTimeRank() const { DARABONBA_PTR_GET_CONST(instanceConsumeTimeRank_, GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRank) };
    inline GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRank instanceConsumeTimeRank() { DARABONBA_PTR_GET(instanceConsumeTimeRank_, GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRank) };
    inline GetInstanceConsumeTimeRankResponseBody& setInstanceConsumeTimeRank(const GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRank & instanceConsumeTimeRank) { DARABONBA_PTR_SET_VALUE(instanceConsumeTimeRank_, instanceConsumeTimeRank) };
    inline GetInstanceConsumeTimeRankResponseBody& setInstanceConsumeTimeRank(GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRank && instanceConsumeTimeRank) { DARABONBA_PTR_SET_RVALUE(instanceConsumeTimeRank_, instanceConsumeTimeRank) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceConsumeTimeRankResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ranking record of the running durations of instances.
    std::shared_ptr<GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRank> instanceConsumeTimeRank_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
