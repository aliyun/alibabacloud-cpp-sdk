// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFIGRESPONSEBODYDATANACOSRUNNINGENV_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFIGRESPONSEBODYDATANACOSRUNNINGENV_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryConfigResponseBodyDataNacosRunningEnvFencePolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryConfigResponseBodyDataNacosRunningEnv : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConfigResponseBodyDataNacosRunningEnv& obj) { 
      DARABONBA_PTR_TO_JSON(emptyProtect, emptyProtect_);
      DARABONBA_PTR_TO_JSON(fenceEnabled, fenceEnabled_);
      DARABONBA_PTR_TO_JSON(fencePolicy, fencePolicy_);
      DARABONBA_PTR_TO_JSON(grayAuth, grayAuth_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConfigResponseBodyDataNacosRunningEnv& obj) { 
      DARABONBA_PTR_FROM_JSON(emptyProtect, emptyProtect_);
      DARABONBA_PTR_FROM_JSON(fenceEnabled, fenceEnabled_);
      DARABONBA_PTR_FROM_JSON(fencePolicy, fencePolicy_);
      DARABONBA_PTR_FROM_JSON(grayAuth, grayAuth_);
    };
    QueryConfigResponseBodyDataNacosRunningEnv() = default ;
    QueryConfigResponseBodyDataNacosRunningEnv(const QueryConfigResponseBodyDataNacosRunningEnv &) = default ;
    QueryConfigResponseBodyDataNacosRunningEnv(QueryConfigResponseBodyDataNacosRunningEnv &&) = default ;
    QueryConfigResponseBodyDataNacosRunningEnv(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConfigResponseBodyDataNacosRunningEnv() = default ;
    QueryConfigResponseBodyDataNacosRunningEnv& operator=(const QueryConfigResponseBodyDataNacosRunningEnv &) = default ;
    QueryConfigResponseBodyDataNacosRunningEnv& operator=(QueryConfigResponseBodyDataNacosRunningEnv &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->emptyProtect_ == nullptr
        && return this->fenceEnabled_ == nullptr && return this->fencePolicy_ == nullptr && return this->grayAuth_ == nullptr; };
    // emptyProtect Field Functions 
    bool hasEmptyProtect() const { return this->emptyProtect_ != nullptr;};
    void deleteEmptyProtect() { this->emptyProtect_ = nullptr;};
    inline bool emptyProtect() const { DARABONBA_PTR_GET_DEFAULT(emptyProtect_, false) };
    inline QueryConfigResponseBodyDataNacosRunningEnv& setEmptyProtect(bool emptyProtect) { DARABONBA_PTR_SET_VALUE(emptyProtect_, emptyProtect) };


    // fenceEnabled Field Functions 
    bool hasFenceEnabled() const { return this->fenceEnabled_ != nullptr;};
    void deleteFenceEnabled() { this->fenceEnabled_ = nullptr;};
    inline bool fenceEnabled() const { DARABONBA_PTR_GET_DEFAULT(fenceEnabled_, false) };
    inline QueryConfigResponseBodyDataNacosRunningEnv& setFenceEnabled(bool fenceEnabled) { DARABONBA_PTR_SET_VALUE(fenceEnabled_, fenceEnabled) };


    // fencePolicy Field Functions 
    bool hasFencePolicy() const { return this->fencePolicy_ != nullptr;};
    void deleteFencePolicy() { this->fencePolicy_ = nullptr;};
    inline const Models::QueryConfigResponseBodyDataNacosRunningEnvFencePolicy & fencePolicy() const { DARABONBA_PTR_GET_CONST(fencePolicy_, Models::QueryConfigResponseBodyDataNacosRunningEnvFencePolicy) };
    inline Models::QueryConfigResponseBodyDataNacosRunningEnvFencePolicy fencePolicy() { DARABONBA_PTR_GET(fencePolicy_, Models::QueryConfigResponseBodyDataNacosRunningEnvFencePolicy) };
    inline QueryConfigResponseBodyDataNacosRunningEnv& setFencePolicy(const Models::QueryConfigResponseBodyDataNacosRunningEnvFencePolicy & fencePolicy) { DARABONBA_PTR_SET_VALUE(fencePolicy_, fencePolicy) };
    inline QueryConfigResponseBodyDataNacosRunningEnv& setFencePolicy(Models::QueryConfigResponseBodyDataNacosRunningEnvFencePolicy && fencePolicy) { DARABONBA_PTR_SET_RVALUE(fencePolicy_, fencePolicy) };


    // grayAuth Field Functions 
    bool hasGrayAuth() const { return this->grayAuth_ != nullptr;};
    void deleteGrayAuth() { this->grayAuth_ = nullptr;};
    inline string grayAuth() const { DARABONBA_PTR_GET_DEFAULT(grayAuth_, "") };
    inline QueryConfigResponseBodyDataNacosRunningEnv& setGrayAuth(string grayAuth) { DARABONBA_PTR_SET_VALUE(grayAuth_, grayAuth) };


  protected:
    // Indicates whether empty list protection is enabled.
    std::shared_ptr<bool> emptyProtect_ = nullptr;
    std::shared_ptr<bool> fenceEnabled_ = nullptr;
    std::shared_ptr<Models::QueryConfigResponseBodyDataNacosRunningEnvFencePolicy> fencePolicy_ = nullptr;
    std::shared_ptr<string> grayAuth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
