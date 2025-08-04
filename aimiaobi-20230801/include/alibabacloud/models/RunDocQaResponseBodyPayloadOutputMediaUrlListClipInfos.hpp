// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODYPAYLOADOUTPUTMEDIAURLLISTCLIPINFOS_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODYPAYLOADOUTPUTMEDIAURLLISTCLIPINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos() = default ;
    RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos(const RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos &) = default ;
    RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos(RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos &&) = default ;
    RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos() = default ;
    RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos& operator=(const RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos &) = default ;
    RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos& operator=(RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr
        && this->to_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline double from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
    inline RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline double to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
    inline RunDocQaResponseBodyPayloadOutputMediaUrlListClipInfos& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    std::shared_ptr<double> from_ = nullptr;
    std::shared_ptr<double> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
