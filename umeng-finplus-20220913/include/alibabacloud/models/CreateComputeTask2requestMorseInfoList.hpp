// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTETASK2REQUESTMORSEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTETASK2REQUESTMORSEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class CreateComputeTask2RequestMorseInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeTask2RequestMorseInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(cuId, cuId_);
      DARABONBA_PTR_TO_JSON(cuVersion, cuVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeTask2RequestMorseInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(cuId, cuId_);
      DARABONBA_PTR_FROM_JSON(cuVersion, cuVersion_);
    };
    CreateComputeTask2RequestMorseInfoList() = default ;
    CreateComputeTask2RequestMorseInfoList(const CreateComputeTask2RequestMorseInfoList &) = default ;
    CreateComputeTask2RequestMorseInfoList(CreateComputeTask2RequestMorseInfoList &&) = default ;
    CreateComputeTask2RequestMorseInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeTask2RequestMorseInfoList() = default ;
    CreateComputeTask2RequestMorseInfoList& operator=(const CreateComputeTask2RequestMorseInfoList &) = default ;
    CreateComputeTask2RequestMorseInfoList& operator=(CreateComputeTask2RequestMorseInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cuId_ != nullptr
        && this->cuVersion_ != nullptr; };
    // cuId Field Functions 
    bool hasCuId() const { return this->cuId_ != nullptr;};
    void deleteCuId() { this->cuId_ = nullptr;};
    inline string cuId() const { DARABONBA_PTR_GET_DEFAULT(cuId_, "") };
    inline CreateComputeTask2RequestMorseInfoList& setCuId(string cuId) { DARABONBA_PTR_SET_VALUE(cuId_, cuId) };


    // cuVersion Field Functions 
    bool hasCuVersion() const { return this->cuVersion_ != nullptr;};
    void deleteCuVersion() { this->cuVersion_ = nullptr;};
    inline string cuVersion() const { DARABONBA_PTR_GET_DEFAULT(cuVersion_, "") };
    inline CreateComputeTask2RequestMorseInfoList& setCuVersion(string cuVersion) { DARABONBA_PTR_SET_VALUE(cuVersion_, cuVersion) };


  protected:
    std::shared_ptr<string> cuId_ = nullptr;
    std::shared_ptr<string> cuVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
