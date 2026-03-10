// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CustomExtractionStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateMemoryStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryStoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(customExtractionStrategies, customExtractionStrategies_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(extractionStrategies, extractionStrategies_);
      DARABONBA_PTR_TO_JSON(memoryStoreName, memoryStoreName_);
      DARABONBA_PTR_TO_JSON(shortTermTtl, shortTermTtl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryStoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(customExtractionStrategies, customExtractionStrategies_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(extractionStrategies, extractionStrategies_);
      DARABONBA_PTR_FROM_JSON(memoryStoreName, memoryStoreName_);
      DARABONBA_PTR_FROM_JSON(shortTermTtl, shortTermTtl_);
    };
    CreateMemoryStoreRequest() = default ;
    CreateMemoryStoreRequest(const CreateMemoryStoreRequest &) = default ;
    CreateMemoryStoreRequest(CreateMemoryStoreRequest &&) = default ;
    CreateMemoryStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryStoreRequest() = default ;
    CreateMemoryStoreRequest& operator=(const CreateMemoryStoreRequest &) = default ;
    CreateMemoryStoreRequest& operator=(CreateMemoryStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customExtractionStrategies_ == nullptr
        && this->description_ == nullptr && this->extractionStrategies_ == nullptr && this->memoryStoreName_ == nullptr && this->shortTermTtl_ == nullptr; };
    // customExtractionStrategies Field Functions 
    bool hasCustomExtractionStrategies() const { return this->customExtractionStrategies_ != nullptr;};
    void deleteCustomExtractionStrategies() { this->customExtractionStrategies_ = nullptr;};
    inline const vector<CustomExtractionStrategy> & getCustomExtractionStrategies() const { DARABONBA_PTR_GET_CONST(customExtractionStrategies_, vector<CustomExtractionStrategy>) };
    inline vector<CustomExtractionStrategy> getCustomExtractionStrategies() { DARABONBA_PTR_GET(customExtractionStrategies_, vector<CustomExtractionStrategy>) };
    inline CreateMemoryStoreRequest& setCustomExtractionStrategies(const vector<CustomExtractionStrategy> & customExtractionStrategies) { DARABONBA_PTR_SET_VALUE(customExtractionStrategies_, customExtractionStrategies) };
    inline CreateMemoryStoreRequest& setCustomExtractionStrategies(vector<CustomExtractionStrategy> && customExtractionStrategies) { DARABONBA_PTR_SET_RVALUE(customExtractionStrategies_, customExtractionStrategies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMemoryStoreRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extractionStrategies Field Functions 
    bool hasExtractionStrategies() const { return this->extractionStrategies_ != nullptr;};
    void deleteExtractionStrategies() { this->extractionStrategies_ = nullptr;};
    inline const vector<string> & getExtractionStrategies() const { DARABONBA_PTR_GET_CONST(extractionStrategies_, vector<string>) };
    inline vector<string> getExtractionStrategies() { DARABONBA_PTR_GET(extractionStrategies_, vector<string>) };
    inline CreateMemoryStoreRequest& setExtractionStrategies(const vector<string> & extractionStrategies) { DARABONBA_PTR_SET_VALUE(extractionStrategies_, extractionStrategies) };
    inline CreateMemoryStoreRequest& setExtractionStrategies(vector<string> && extractionStrategies) { DARABONBA_PTR_SET_RVALUE(extractionStrategies_, extractionStrategies) };


    // memoryStoreName Field Functions 
    bool hasMemoryStoreName() const { return this->memoryStoreName_ != nullptr;};
    void deleteMemoryStoreName() { this->memoryStoreName_ = nullptr;};
    inline string getMemoryStoreName() const { DARABONBA_PTR_GET_DEFAULT(memoryStoreName_, "") };
    inline CreateMemoryStoreRequest& setMemoryStoreName(string memoryStoreName) { DARABONBA_PTR_SET_VALUE(memoryStoreName_, memoryStoreName) };


    // shortTermTtl Field Functions 
    bool hasShortTermTtl() const { return this->shortTermTtl_ != nullptr;};
    void deleteShortTermTtl() { this->shortTermTtl_ = nullptr;};
    inline int32_t getShortTermTtl() const { DARABONBA_PTR_GET_DEFAULT(shortTermTtl_, 0) };
    inline CreateMemoryStoreRequest& setShortTermTtl(int32_t shortTermTtl) { DARABONBA_PTR_SET_VALUE(shortTermTtl_, shortTermTtl) };


  protected:
    shared_ptr<vector<CustomExtractionStrategy>> customExtractionStrategies_ {};
    shared_ptr<string> description_ {};
    shared_ptr<vector<string>> extractionStrategies_ {};
    // This parameter is required.
    shared_ptr<string> memoryStoreName_ {};
    // This parameter is required.
    shared_ptr<int32_t> shortTermTtl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
