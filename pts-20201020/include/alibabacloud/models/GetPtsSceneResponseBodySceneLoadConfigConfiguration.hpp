// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENELOADCONFIGCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENELOADCONFIGCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneResponseBodySceneLoadConfigConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneResponseBodySceneLoadConfigConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(AllConcurrencyBegin, allConcurrencyBegin_);
      DARABONBA_PTR_TO_JSON(AllConcurrencyLimit, allConcurrencyLimit_);
      DARABONBA_PTR_TO_JSON(AllRpsBegin, allRpsBegin_);
      DARABONBA_PTR_TO_JSON(AllRpsLimit, allRpsLimit_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneResponseBodySceneLoadConfigConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(AllConcurrencyBegin, allConcurrencyBegin_);
      DARABONBA_PTR_FROM_JSON(AllConcurrencyLimit, allConcurrencyLimit_);
      DARABONBA_PTR_FROM_JSON(AllRpsBegin, allRpsBegin_);
      DARABONBA_PTR_FROM_JSON(AllRpsLimit, allRpsLimit_);
    };
    GetPtsSceneResponseBodySceneLoadConfigConfiguration() = default ;
    GetPtsSceneResponseBodySceneLoadConfigConfiguration(const GetPtsSceneResponseBodySceneLoadConfigConfiguration &) = default ;
    GetPtsSceneResponseBodySceneLoadConfigConfiguration(GetPtsSceneResponseBodySceneLoadConfigConfiguration &&) = default ;
    GetPtsSceneResponseBodySceneLoadConfigConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneResponseBodySceneLoadConfigConfiguration() = default ;
    GetPtsSceneResponseBodySceneLoadConfigConfiguration& operator=(const GetPtsSceneResponseBodySceneLoadConfigConfiguration &) = default ;
    GetPtsSceneResponseBodySceneLoadConfigConfiguration& operator=(GetPtsSceneResponseBodySceneLoadConfigConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allConcurrencyBegin_ == nullptr
        && return this->allConcurrencyLimit_ == nullptr && return this->allRpsBegin_ == nullptr && return this->allRpsLimit_ == nullptr; };
    // allConcurrencyBegin Field Functions 
    bool hasAllConcurrencyBegin() const { return this->allConcurrencyBegin_ != nullptr;};
    void deleteAllConcurrencyBegin() { this->allConcurrencyBegin_ = nullptr;};
    inline int32_t allConcurrencyBegin() const { DARABONBA_PTR_GET_DEFAULT(allConcurrencyBegin_, 0) };
    inline GetPtsSceneResponseBodySceneLoadConfigConfiguration& setAllConcurrencyBegin(int32_t allConcurrencyBegin) { DARABONBA_PTR_SET_VALUE(allConcurrencyBegin_, allConcurrencyBegin) };


    // allConcurrencyLimit Field Functions 
    bool hasAllConcurrencyLimit() const { return this->allConcurrencyLimit_ != nullptr;};
    void deleteAllConcurrencyLimit() { this->allConcurrencyLimit_ = nullptr;};
    inline int32_t allConcurrencyLimit() const { DARABONBA_PTR_GET_DEFAULT(allConcurrencyLimit_, 0) };
    inline GetPtsSceneResponseBodySceneLoadConfigConfiguration& setAllConcurrencyLimit(int32_t allConcurrencyLimit) { DARABONBA_PTR_SET_VALUE(allConcurrencyLimit_, allConcurrencyLimit) };


    // allRpsBegin Field Functions 
    bool hasAllRpsBegin() const { return this->allRpsBegin_ != nullptr;};
    void deleteAllRpsBegin() { this->allRpsBegin_ = nullptr;};
    inline int32_t allRpsBegin() const { DARABONBA_PTR_GET_DEFAULT(allRpsBegin_, 0) };
    inline GetPtsSceneResponseBodySceneLoadConfigConfiguration& setAllRpsBegin(int32_t allRpsBegin) { DARABONBA_PTR_SET_VALUE(allRpsBegin_, allRpsBegin) };


    // allRpsLimit Field Functions 
    bool hasAllRpsLimit() const { return this->allRpsLimit_ != nullptr;};
    void deleteAllRpsLimit() { this->allRpsLimit_ = nullptr;};
    inline int32_t allRpsLimit() const { DARABONBA_PTR_GET_DEFAULT(allRpsLimit_, 0) };
    inline GetPtsSceneResponseBodySceneLoadConfigConfiguration& setAllRpsLimit(int32_t allRpsLimit) { DARABONBA_PTR_SET_VALUE(allRpsLimit_, allRpsLimit) };


  protected:
    // The starting number of concurrent sessions.
    std::shared_ptr<int32_t> allConcurrencyBegin_ = nullptr;
    // The maximum number of concurrent sessions.
    std::shared_ptr<int32_t> allConcurrencyLimit_ = nullptr;
    // The starting RPS.
    std::shared_ptr<int32_t> allRpsBegin_ = nullptr;
    // The maximum RPS.
    std::shared_ptr<int32_t> allRpsLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
