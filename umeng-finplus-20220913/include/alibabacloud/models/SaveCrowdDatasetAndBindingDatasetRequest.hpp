// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SaveCrowdDatasetAndBindingDatasetRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SaveCrowdDatasetAndBindingDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCrowdDatasetAndBindingDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCrowdDatasetAndBindingDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SaveCrowdDatasetAndBindingDatasetRequest() = default ;
    SaveCrowdDatasetAndBindingDatasetRequest(const SaveCrowdDatasetAndBindingDatasetRequest &) = default ;
    SaveCrowdDatasetAndBindingDatasetRequest(SaveCrowdDatasetAndBindingDatasetRequest &&) = default ;
    SaveCrowdDatasetAndBindingDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCrowdDatasetAndBindingDatasetRequest() = default ;
    SaveCrowdDatasetAndBindingDatasetRequest& operator=(const SaveCrowdDatasetAndBindingDatasetRequest &) = default ;
    SaveCrowdDatasetAndBindingDatasetRequest& operator=(SaveCrowdDatasetAndBindingDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SaveCrowdDatasetAndBindingDatasetRequestBody & body() const { DARABONBA_PTR_GET_CONST(body_, SaveCrowdDatasetAndBindingDatasetRequestBody) };
    inline SaveCrowdDatasetAndBindingDatasetRequestBody body() { DARABONBA_PTR_GET(body_, SaveCrowdDatasetAndBindingDatasetRequestBody) };
    inline SaveCrowdDatasetAndBindingDatasetRequest& setBody(const SaveCrowdDatasetAndBindingDatasetRequestBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SaveCrowdDatasetAndBindingDatasetRequest& setBody(SaveCrowdDatasetAndBindingDatasetRequestBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<SaveCrowdDatasetAndBindingDatasetRequestBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
