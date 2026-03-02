// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPINFOCONTENT_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPINFOCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppInfoContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppInfoContent& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppInfoContent& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    NeuronAppInfoContent() = default ;
    NeuronAppInfoContent(const NeuronAppInfoContent &) = default ;
    NeuronAppInfoContent(NeuronAppInfoContent &&) = default ;
    NeuronAppInfoContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppInfoContent() = default ;
    NeuronAppInfoContent& operator=(const NeuronAppInfoContent &) = default ;
    NeuronAppInfoContent& operator=(NeuronAppInfoContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->title_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline NeuronAppInfoContent& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline NeuronAppInfoContent& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    shared_ptr<string> content_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
