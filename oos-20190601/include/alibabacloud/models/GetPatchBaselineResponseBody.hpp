// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPATCHBASELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPATCHBASELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPatchBaselineResponseBodyPatchBaseline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetPatchBaselineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPatchBaselineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PatchBaseline, patchBaseline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPatchBaselineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PatchBaseline, patchBaseline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPatchBaselineResponseBody() = default ;
    GetPatchBaselineResponseBody(const GetPatchBaselineResponseBody &) = default ;
    GetPatchBaselineResponseBody(GetPatchBaselineResponseBody &&) = default ;
    GetPatchBaselineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPatchBaselineResponseBody() = default ;
    GetPatchBaselineResponseBody& operator=(const GetPatchBaselineResponseBody &) = default ;
    GetPatchBaselineResponseBody& operator=(GetPatchBaselineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->patchBaseline_ == nullptr
        && return this->requestId_ == nullptr; };
    // patchBaseline Field Functions 
    bool hasPatchBaseline() const { return this->patchBaseline_ != nullptr;};
    void deletePatchBaseline() { this->patchBaseline_ = nullptr;};
    inline const GetPatchBaselineResponseBodyPatchBaseline & patchBaseline() const { DARABONBA_PTR_GET_CONST(patchBaseline_, GetPatchBaselineResponseBodyPatchBaseline) };
    inline GetPatchBaselineResponseBodyPatchBaseline patchBaseline() { DARABONBA_PTR_GET(patchBaseline_, GetPatchBaselineResponseBodyPatchBaseline) };
    inline GetPatchBaselineResponseBody& setPatchBaseline(const GetPatchBaselineResponseBodyPatchBaseline & patchBaseline) { DARABONBA_PTR_SET_VALUE(patchBaseline_, patchBaseline) };
    inline GetPatchBaselineResponseBody& setPatchBaseline(GetPatchBaselineResponseBodyPatchBaseline && patchBaseline) { DARABONBA_PTR_SET_RVALUE(patchBaseline_, patchBaseline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPatchBaselineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the patch baseline.
    std::shared_ptr<GetPatchBaselineResponseBodyPatchBaseline> patchBaseline_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
