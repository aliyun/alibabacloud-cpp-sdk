// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRANSCODETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETETRANSCODETEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteTranscodeTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTranscodeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistTranscodeTemplateIds, nonExistTranscodeTemplateIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTranscodeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistTranscodeTemplateIds, nonExistTranscodeTemplateIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteTranscodeTemplatesResponseBody() = default ;
    DeleteTranscodeTemplatesResponseBody(const DeleteTranscodeTemplatesResponseBody &) = default ;
    DeleteTranscodeTemplatesResponseBody(DeleteTranscodeTemplatesResponseBody &&) = default ;
    DeleteTranscodeTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTranscodeTemplatesResponseBody() = default ;
    DeleteTranscodeTemplatesResponseBody& operator=(const DeleteTranscodeTemplatesResponseBody &) = default ;
    DeleteTranscodeTemplatesResponseBody& operator=(DeleteTranscodeTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nonExistTranscodeTemplateIds_ != nullptr
        && this->requestId_ != nullptr; };
    // nonExistTranscodeTemplateIds Field Functions 
    bool hasNonExistTranscodeTemplateIds() const { return this->nonExistTranscodeTemplateIds_ != nullptr;};
    void deleteNonExistTranscodeTemplateIds() { this->nonExistTranscodeTemplateIds_ = nullptr;};
    inline const vector<string> & nonExistTranscodeTemplateIds() const { DARABONBA_PTR_GET_CONST(nonExistTranscodeTemplateIds_, vector<string>) };
    inline vector<string> nonExistTranscodeTemplateIds() { DARABONBA_PTR_GET(nonExistTranscodeTemplateIds_, vector<string>) };
    inline DeleteTranscodeTemplatesResponseBody& setNonExistTranscodeTemplateIds(const vector<string> & nonExistTranscodeTemplateIds) { DARABONBA_PTR_SET_VALUE(nonExistTranscodeTemplateIds_, nonExistTranscodeTemplateIds) };
    inline DeleteTranscodeTemplatesResponseBody& setNonExistTranscodeTemplateIds(vector<string> && nonExistTranscodeTemplateIds) { DARABONBA_PTR_SET_RVALUE(nonExistTranscodeTemplateIds_, nonExistTranscodeTemplateIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteTranscodeTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> nonExistTranscodeTemplateIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
