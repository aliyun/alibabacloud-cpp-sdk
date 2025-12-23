// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEMERGEDTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEMERGEDTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Schema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GenerateMergedTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateMergedTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateMergedTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
    };
    GenerateMergedTableRequest() = default ;
    GenerateMergedTableRequest(const GenerateMergedTableRequest &) = default ;
    GenerateMergedTableRequest(GenerateMergedTableRequest &&) = default ;
    GenerateMergedTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateMergedTableRequest() = default ;
    GenerateMergedTableRequest& operator=(const GenerateMergedTableRequest &) = default ;
    GenerateMergedTableRequest& operator=(GenerateMergedTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->spec_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Schema & body() const { DARABONBA_PTR_GET_CONST(body_, Schema) };
    inline Schema body() { DARABONBA_PTR_GET(body_, Schema) };
    inline GenerateMergedTableRequest& setBody(const Schema & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GenerateMergedTableRequest& setBody(Schema && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GenerateMergedTableRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The request body parameters.
    std::shared_ptr<Schema> body_ = nullptr;
    // The specifications of the OpenSearch instance. This parameter is used to check whether the OpenSearch instance meets the special limits on an exclusive instance.
    // 
    // Default value: opensearch.share.common.
    // 
    // For more information, see the description of the spec field in the Quota topic.
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
