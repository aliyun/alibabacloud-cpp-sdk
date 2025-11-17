// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELABELTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELABELTABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateLabelTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLabelTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LabelTableId, labelTableId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLabelTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelTableId, labelTableId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLabelTableResponseBody() = default ;
    CreateLabelTableResponseBody(const CreateLabelTableResponseBody &) = default ;
    CreateLabelTableResponseBody(CreateLabelTableResponseBody &&) = default ;
    CreateLabelTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLabelTableResponseBody() = default ;
    CreateLabelTableResponseBody& operator=(const CreateLabelTableResponseBody &) = default ;
    CreateLabelTableResponseBody& operator=(CreateLabelTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelTableId_ == nullptr
        && return this->requestId_ == nullptr; };
    // labelTableId Field Functions 
    bool hasLabelTableId() const { return this->labelTableId_ != nullptr;};
    void deleteLabelTableId() { this->labelTableId_ = nullptr;};
    inline string labelTableId() const { DARABONBA_PTR_GET_DEFAULT(labelTableId_, "") };
    inline CreateLabelTableResponseBody& setLabelTableId(string labelTableId) { DARABONBA_PTR_SET_VALUE(labelTableId_, labelTableId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLabelTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> labelTableId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
