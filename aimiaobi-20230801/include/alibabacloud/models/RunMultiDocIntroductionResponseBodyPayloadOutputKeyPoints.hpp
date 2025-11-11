// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMULTIDOCINTRODUCTIONRESPONSEBODYPAYLOADOUTPUTKEYPOINTS_HPP_
#define ALIBABACLOUD_MODELS_RUNMULTIDOCINTRODUCTIONRESPONSEBODYPAYLOADOUTPUTKEYPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPoint, keyPoint_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPoint, keyPoint_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints() = default ;
    RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints(const RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints &) = default ;
    RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints(RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints &&) = default ;
    RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints() = default ;
    RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints& operator=(const RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints &) = default ;
    RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints& operator=(RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyPoint_ == nullptr
        && return this->source_ == nullptr; };
    // keyPoint Field Functions 
    bool hasKeyPoint() const { return this->keyPoint_ != nullptr;};
    void deleteKeyPoint() { this->keyPoint_ = nullptr;};
    inline string keyPoint() const { DARABONBA_PTR_GET_DEFAULT(keyPoint_, "") };
    inline RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints& setKeyPoint(string keyPoint) { DARABONBA_PTR_SET_VALUE(keyPoint_, keyPoint) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline RunMultiDocIntroductionResponseBodyPayloadOutputKeyPoints& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    std::shared_ptr<string> keyPoint_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
