// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYLABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYLABELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteGatewayLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewayLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LabelKeys, labelKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewayLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelKeys, labelKeys_);
    };
    DeleteGatewayLabelRequest() = default ;
    DeleteGatewayLabelRequest(const DeleteGatewayLabelRequest &) = default ;
    DeleteGatewayLabelRequest(DeleteGatewayLabelRequest &&) = default ;
    DeleteGatewayLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewayLabelRequest() = default ;
    DeleteGatewayLabelRequest& operator=(const DeleteGatewayLabelRequest &) = default ;
    DeleteGatewayLabelRequest& operator=(DeleteGatewayLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelKeys_ == nullptr; };
    // labelKeys Field Functions 
    bool hasLabelKeys() const { return this->labelKeys_ != nullptr;};
    void deleteLabelKeys() { this->labelKeys_ = nullptr;};
    inline const vector<string> & labelKeys() const { DARABONBA_PTR_GET_CONST(labelKeys_, vector<string>) };
    inline vector<string> labelKeys() { DARABONBA_PTR_GET(labelKeys_, vector<string>) };
    inline DeleteGatewayLabelRequest& setLabelKeys(const vector<string> & labelKeys) { DARABONBA_PTR_SET_VALUE(labelKeys_, labelKeys) };
    inline DeleteGatewayLabelRequest& setLabelKeys(vector<string> && labelKeys) { DARABONBA_PTR_SET_RVALUE(labelKeys_, labelKeys) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> labelKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
