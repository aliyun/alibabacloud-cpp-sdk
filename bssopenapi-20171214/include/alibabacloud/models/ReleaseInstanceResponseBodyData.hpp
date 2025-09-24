// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RELEASEINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ReleaseInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(ReleaseResult, releaseResult_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(ReleaseResult, releaseResult_);
    };
    ReleaseInstanceResponseBodyData() = default ;
    ReleaseInstanceResponseBodyData(const ReleaseInstanceResponseBodyData &) = default ;
    ReleaseInstanceResponseBodyData(ReleaseInstanceResponseBodyData &&) = default ;
    ReleaseInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseInstanceResponseBodyData() = default ;
    ReleaseInstanceResponseBodyData& operator=(const ReleaseInstanceResponseBodyData &) = default ;
    ReleaseInstanceResponseBodyData& operator=(ReleaseInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostId_ != nullptr
        && this->releaseResult_ != nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ReleaseInstanceResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // releaseResult Field Functions 
    bool hasReleaseResult() const { return this->releaseResult_ != nullptr;};
    void deleteReleaseResult() { this->releaseResult_ = nullptr;};
    inline bool releaseResult() const { DARABONBA_PTR_GET_DEFAULT(releaseResult_, false) };
    inline ReleaseInstanceResponseBodyData& setReleaseResult(bool releaseResult) { DARABONBA_PTR_SET_VALUE(releaseResult_, releaseResult) };


  protected:
    // The site of the execution host.
    std::shared_ptr<string> hostId_ = nullptr;
    // Indicates whether the instance is released.
    std::shared_ptr<bool> releaseResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
