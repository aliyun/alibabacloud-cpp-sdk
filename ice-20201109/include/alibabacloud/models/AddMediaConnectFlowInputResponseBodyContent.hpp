// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEDIACONNECTFLOWINPUTRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_ADDMEDIACONNECTFLOWINPUTRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddMediaConnectFlowInputResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMediaConnectFlowInputResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(InputUrl, inputUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AddMediaConnectFlowInputResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(InputUrl, inputUrl_);
    };
    AddMediaConnectFlowInputResponseBodyContent() = default ;
    AddMediaConnectFlowInputResponseBodyContent(const AddMediaConnectFlowInputResponseBodyContent &) = default ;
    AddMediaConnectFlowInputResponseBodyContent(AddMediaConnectFlowInputResponseBodyContent &&) = default ;
    AddMediaConnectFlowInputResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMediaConnectFlowInputResponseBodyContent() = default ;
    AddMediaConnectFlowInputResponseBodyContent& operator=(const AddMediaConnectFlowInputResponseBodyContent &) = default ;
    AddMediaConnectFlowInputResponseBodyContent& operator=(AddMediaConnectFlowInputResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputUrl_ == nullptr; };
    // inputUrl Field Functions 
    bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
    void deleteInputUrl() { this->inputUrl_ = nullptr;};
    inline string inputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
    inline AddMediaConnectFlowInputResponseBodyContent& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


  protected:
    // The source URL.
    std::shared_ptr<string> inputUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
