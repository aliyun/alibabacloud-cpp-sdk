// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTRESPONSEBODYDATALISTAPPLICATIONCONFIGSECURITY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTRESPONSEBODYDATALISTAPPLICATIONCONFIGSECURITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListPublishedAgentResponseBodyDataListApplicationConfigSecurity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAgentResponseBodyDataListApplicationConfigSecurity& obj) { 
      DARABONBA_PTR_TO_JSON(processingStrategy, processingStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAgentResponseBodyDataListApplicationConfigSecurity& obj) { 
      DARABONBA_PTR_FROM_JSON(processingStrategy, processingStrategy_);
    };
    ListPublishedAgentResponseBodyDataListApplicationConfigSecurity() = default ;
    ListPublishedAgentResponseBodyDataListApplicationConfigSecurity(const ListPublishedAgentResponseBodyDataListApplicationConfigSecurity &) = default ;
    ListPublishedAgentResponseBodyDataListApplicationConfigSecurity(ListPublishedAgentResponseBodyDataListApplicationConfigSecurity &&) = default ;
    ListPublishedAgentResponseBodyDataListApplicationConfigSecurity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAgentResponseBodyDataListApplicationConfigSecurity() = default ;
    ListPublishedAgentResponseBodyDataListApplicationConfigSecurity& operator=(const ListPublishedAgentResponseBodyDataListApplicationConfigSecurity &) = default ;
    ListPublishedAgentResponseBodyDataListApplicationConfigSecurity& operator=(ListPublishedAgentResponseBodyDataListApplicationConfigSecurity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->processingStrategy_ != nullptr; };
    // processingStrategy Field Functions 
    bool hasProcessingStrategy() const { return this->processingStrategy_ != nullptr;};
    void deleteProcessingStrategy() { this->processingStrategy_ = nullptr;};
    inline string processingStrategy() const { DARABONBA_PTR_GET_DEFAULT(processingStrategy_, "") };
    inline ListPublishedAgentResponseBodyDataListApplicationConfigSecurity& setProcessingStrategy(string processingStrategy) { DARABONBA_PTR_SET_VALUE(processingStrategy_, processingStrategy) };


  protected:
    std::shared_ptr<string> processingStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
