// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOPTENELAPSEDTIMEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TOPTENELAPSEDTIMEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TopTenElapsedTimeInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TopTenElapsedTimeInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceConsumeTimeRank, instanceConsumeTimeRank_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TopTenElapsedTimeInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceConsumeTimeRank, instanceConsumeTimeRank_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TopTenElapsedTimeInstanceResponseBody() = default ;
    TopTenElapsedTimeInstanceResponseBody(const TopTenElapsedTimeInstanceResponseBody &) = default ;
    TopTenElapsedTimeInstanceResponseBody(TopTenElapsedTimeInstanceResponseBody &&) = default ;
    TopTenElapsedTimeInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TopTenElapsedTimeInstanceResponseBody() = default ;
    TopTenElapsedTimeInstanceResponseBody& operator=(const TopTenElapsedTimeInstanceResponseBody &) = default ;
    TopTenElapsedTimeInstanceResponseBody& operator=(TopTenElapsedTimeInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceConsumeTimeRank_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceConsumeTimeRank Field Functions 
    bool hasInstanceConsumeTimeRank() const { return this->instanceConsumeTimeRank_ != nullptr;};
    void deleteInstanceConsumeTimeRank() { this->instanceConsumeTimeRank_ = nullptr;};
    inline const TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank & instanceConsumeTimeRank() const { DARABONBA_PTR_GET_CONST(instanceConsumeTimeRank_, TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank) };
    inline TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank instanceConsumeTimeRank() { DARABONBA_PTR_GET(instanceConsumeTimeRank_, TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank) };
    inline TopTenElapsedTimeInstanceResponseBody& setInstanceConsumeTimeRank(const TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank & instanceConsumeTimeRank) { DARABONBA_PTR_SET_VALUE(instanceConsumeTimeRank_, instanceConsumeTimeRank) };
    inline TopTenElapsedTimeInstanceResponseBody& setInstanceConsumeTimeRank(TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank && instanceConsumeTimeRank) { DARABONBA_PTR_SET_RVALUE(instanceConsumeTimeRank_, instanceConsumeTimeRank) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TopTenElapsedTimeInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ranking record of the running durations of the instances.
    std::shared_ptr<TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRank> instanceConsumeTimeRank_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
