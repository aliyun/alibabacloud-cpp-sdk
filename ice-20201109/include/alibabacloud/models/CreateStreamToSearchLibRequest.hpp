// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTREAMTOSEARCHLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTREAMTOSEARCHLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateStreamToSearchLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStreamToSearchLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStreamToSearchLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    CreateStreamToSearchLibRequest() = default ;
    CreateStreamToSearchLibRequest(const CreateStreamToSearchLibRequest &) = default ;
    CreateStreamToSearchLibRequest(CreateStreamToSearchLibRequest &&) = default ;
    CreateStreamToSearchLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStreamToSearchLibRequest() = default ;
    CreateStreamToSearchLibRequest& operator=(const CreateStreamToSearchLibRequest &) = default ;
    CreateStreamToSearchLibRequest& operator=(CreateStreamToSearchLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && return this->namespace_ == nullptr && return this->searchLibName_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline CreateStreamToSearchLibRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateStreamToSearchLibRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline CreateStreamToSearchLibRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    // The URL of the live stream to be ingested and analyzed.
    std::shared_ptr<string> input_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The search library.
    std::shared_ptr<string> searchLibName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
