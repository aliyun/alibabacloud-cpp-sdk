// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFUNDACCOUNTPAYRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFUNDACCOUNTPAYRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFundAccountPayRelationResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateFundAccountPayRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFundAccountPayRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFundAccountPayRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFundAccountPayRelationResponseBody() = default ;
    CreateFundAccountPayRelationResponseBody(const CreateFundAccountPayRelationResponseBody &) = default ;
    CreateFundAccountPayRelationResponseBody(CreateFundAccountPayRelationResponseBody &&) = default ;
    CreateFundAccountPayRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFundAccountPayRelationResponseBody() = default ;
    CreateFundAccountPayRelationResponseBody& operator=(const CreateFundAccountPayRelationResponseBody &) = default ;
    CreateFundAccountPayRelationResponseBody& operator=(CreateFundAccountPayRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->metadata_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<CreateFundAccountPayRelationResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<CreateFundAccountPayRelationResponseBodyData>) };
    inline vector<CreateFundAccountPayRelationResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<CreateFundAccountPayRelationResponseBodyData>) };
    inline CreateFundAccountPayRelationResponseBody& setData(const vector<CreateFundAccountPayRelationResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateFundAccountPayRelationResponseBody& setData(vector<CreateFundAccountPayRelationResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline CreateFundAccountPayRelationResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreateFundAccountPayRelationResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFundAccountPayRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<CreateFundAccountPayRelationResponseBodyData>> data_ = nullptr;
    Darabonba::Json metadata_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
