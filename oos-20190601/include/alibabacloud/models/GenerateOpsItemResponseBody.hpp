// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEOPSITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEOPSITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GenerateOpsItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateOpsItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpsItemIds, opsItemIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateOpsItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpsItemIds, opsItemIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateOpsItemResponseBody() = default ;
    GenerateOpsItemResponseBody(const GenerateOpsItemResponseBody &) = default ;
    GenerateOpsItemResponseBody(GenerateOpsItemResponseBody &&) = default ;
    GenerateOpsItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateOpsItemResponseBody() = default ;
    GenerateOpsItemResponseBody& operator=(const GenerateOpsItemResponseBody &) = default ;
    GenerateOpsItemResponseBody& operator=(GenerateOpsItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opsItemIds_ == nullptr
        && return this->requestId_ == nullptr; };
    // opsItemIds Field Functions 
    bool hasOpsItemIds() const { return this->opsItemIds_ != nullptr;};
    void deleteOpsItemIds() { this->opsItemIds_ = nullptr;};
    inline const vector<string> & opsItemIds() const { DARABONBA_PTR_GET_CONST(opsItemIds_, vector<string>) };
    inline vector<string> opsItemIds() { DARABONBA_PTR_GET(opsItemIds_, vector<string>) };
    inline GenerateOpsItemResponseBody& setOpsItemIds(const vector<string> & opsItemIds) { DARABONBA_PTR_SET_VALUE(opsItemIds_, opsItemIds) };
    inline GenerateOpsItemResponseBody& setOpsItemIds(vector<string> && opsItemIds) { DARABONBA_PTR_SET_RVALUE(opsItemIds_, opsItemIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateOpsItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The O\\&M item list.
    std::shared_ptr<vector<string>> opsItemIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
