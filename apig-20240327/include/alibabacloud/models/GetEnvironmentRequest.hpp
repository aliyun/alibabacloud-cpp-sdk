// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENVIRONMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETENVIRONMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetEnvironmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnvironmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(withStatistics, withStatistics_);
      DARABONBA_PTR_TO_JSON(withVpcInfo, withVpcInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnvironmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(withStatistics, withStatistics_);
      DARABONBA_PTR_FROM_JSON(withVpcInfo, withVpcInfo_);
    };
    GetEnvironmentRequest() = default ;
    GetEnvironmentRequest(const GetEnvironmentRequest &) = default ;
    GetEnvironmentRequest(GetEnvironmentRequest &&) = default ;
    GetEnvironmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnvironmentRequest() = default ;
    GetEnvironmentRequest& operator=(const GetEnvironmentRequest &) = default ;
    GetEnvironmentRequest& operator=(GetEnvironmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->withStatistics_ == nullptr
        && return this->withVpcInfo_ == nullptr; };
    // withStatistics Field Functions 
    bool hasWithStatistics() const { return this->withStatistics_ != nullptr;};
    void deleteWithStatistics() { this->withStatistics_ = nullptr;};
    inline bool withStatistics() const { DARABONBA_PTR_GET_DEFAULT(withStatistics_, false) };
    inline GetEnvironmentRequest& setWithStatistics(bool withStatistics) { DARABONBA_PTR_SET_VALUE(withStatistics_, withStatistics) };


    // withVpcInfo Field Functions 
    bool hasWithVpcInfo() const { return this->withVpcInfo_ != nullptr;};
    void deleteWithVpcInfo() { this->withVpcInfo_ = nullptr;};
    inline bool withVpcInfo() const { DARABONBA_PTR_GET_DEFAULT(withVpcInfo_, false) };
    inline GetEnvironmentRequest& setWithVpcInfo(bool withVpcInfo) { DARABONBA_PTR_SET_VALUE(withVpcInfo_, withVpcInfo) };


  protected:
    // Indicates whether to return online resource info.
    std::shared_ptr<bool> withStatistics_ = nullptr;
    // Option for vpc info.
    std::shared_ptr<bool> withVpcInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
