// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTRESPONSEBODYDATAAPPLICATIONCONFIGSECURITY_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTRESPONSEBODYDATAAPPLICATIONCONFIGSECURITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetPublishedAgentResponseBodyDataApplicationConfigSecurity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublishedAgentResponseBodyDataApplicationConfigSecurity& obj) { 
      DARABONBA_PTR_TO_JSON(processingStrategy, processingStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublishedAgentResponseBodyDataApplicationConfigSecurity& obj) { 
      DARABONBA_PTR_FROM_JSON(processingStrategy, processingStrategy_);
    };
    GetPublishedAgentResponseBodyDataApplicationConfigSecurity() = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigSecurity(const GetPublishedAgentResponseBodyDataApplicationConfigSecurity &) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigSecurity(GetPublishedAgentResponseBodyDataApplicationConfigSecurity &&) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigSecurity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublishedAgentResponseBodyDataApplicationConfigSecurity() = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigSecurity& operator=(const GetPublishedAgentResponseBodyDataApplicationConfigSecurity &) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfigSecurity& operator=(GetPublishedAgentResponseBodyDataApplicationConfigSecurity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->processingStrategy_ != nullptr; };
    // processingStrategy Field Functions 
    bool hasProcessingStrategy() const { return this->processingStrategy_ != nullptr;};
    void deleteProcessingStrategy() { this->processingStrategy_ = nullptr;};
    inline string processingStrategy() const { DARABONBA_PTR_GET_DEFAULT(processingStrategy_, "") };
    inline GetPublishedAgentResponseBodyDataApplicationConfigSecurity& setProcessingStrategy(string processingStrategy) { DARABONBA_PTR_SET_VALUE(processingStrategy_, processingStrategy) };


  protected:
    std::shared_ptr<string> processingStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
