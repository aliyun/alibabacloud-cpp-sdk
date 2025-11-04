// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEDIACONNECTFLOWOUTPUTRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_ADDMEDIACONNECTFLOWOUTPUTRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddMediaConnectFlowOutputResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMediaConnectFlowOutputResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AddMediaConnectFlowOutputResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
    };
    AddMediaConnectFlowOutputResponseBodyContent() = default ;
    AddMediaConnectFlowOutputResponseBodyContent(const AddMediaConnectFlowOutputResponseBodyContent &) = default ;
    AddMediaConnectFlowOutputResponseBodyContent(AddMediaConnectFlowOutputResponseBodyContent &&) = default ;
    AddMediaConnectFlowOutputResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMediaConnectFlowOutputResponseBodyContent() = default ;
    AddMediaConnectFlowOutputResponseBodyContent& operator=(const AddMediaConnectFlowOutputResponseBodyContent &) = default ;
    AddMediaConnectFlowOutputResponseBodyContent& operator=(AddMediaConnectFlowOutputResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputUrl_ == nullptr; };
    // outputUrl Field Functions 
    bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
    void deleteOutputUrl() { this->outputUrl_ = nullptr;};
    inline string outputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
    inline AddMediaConnectFlowOutputResponseBodyContent& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


  protected:
    // The output URL.
    std::shared_ptr<string> outputUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
