// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONREQUESTEXTRA_HPP_
#define ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONREQUESTEXTRA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunLegalAdviceConsultationRequestExtra : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLegalAdviceConsultationRequestExtra& obj) { 
      DARABONBA_PTR_TO_JSON(deepThink, deepThink_);
      DARABONBA_PTR_TO_JSON(onlineSearch, onlineSearch_);
    };
    friend void from_json(const Darabonba::Json& j, RunLegalAdviceConsultationRequestExtra& obj) { 
      DARABONBA_PTR_FROM_JSON(deepThink, deepThink_);
      DARABONBA_PTR_FROM_JSON(onlineSearch, onlineSearch_);
    };
    RunLegalAdviceConsultationRequestExtra() = default ;
    RunLegalAdviceConsultationRequestExtra(const RunLegalAdviceConsultationRequestExtra &) = default ;
    RunLegalAdviceConsultationRequestExtra(RunLegalAdviceConsultationRequestExtra &&) = default ;
    RunLegalAdviceConsultationRequestExtra(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLegalAdviceConsultationRequestExtra() = default ;
    RunLegalAdviceConsultationRequestExtra& operator=(const RunLegalAdviceConsultationRequestExtra &) = default ;
    RunLegalAdviceConsultationRequestExtra& operator=(RunLegalAdviceConsultationRequestExtra &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deepThink_ == nullptr
        && return this->onlineSearch_ == nullptr; };
    // deepThink Field Functions 
    bool hasDeepThink() const { return this->deepThink_ != nullptr;};
    void deleteDeepThink() { this->deepThink_ = nullptr;};
    inline bool deepThink() const { DARABONBA_PTR_GET_DEFAULT(deepThink_, false) };
    inline RunLegalAdviceConsultationRequestExtra& setDeepThink(bool deepThink) { DARABONBA_PTR_SET_VALUE(deepThink_, deepThink) };


    // onlineSearch Field Functions 
    bool hasOnlineSearch() const { return this->onlineSearch_ != nullptr;};
    void deleteOnlineSearch() { this->onlineSearch_ = nullptr;};
    inline bool onlineSearch() const { DARABONBA_PTR_GET_DEFAULT(onlineSearch_, false) };
    inline RunLegalAdviceConsultationRequestExtra& setOnlineSearch(bool onlineSearch) { DARABONBA_PTR_SET_VALUE(onlineSearch_, onlineSearch) };


  protected:
    std::shared_ptr<bool> deepThink_ = nullptr;
    std::shared_ptr<bool> onlineSearch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
