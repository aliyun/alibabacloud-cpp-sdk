// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RealTimeDialogResponseBodyChoices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealTimeDialogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealTimeDialogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(choices, choices_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RealTimeDialogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(choices, choices_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    RealTimeDialogResponseBody() = default ;
    RealTimeDialogResponseBody(const RealTimeDialogResponseBody &) = default ;
    RealTimeDialogResponseBody(RealTimeDialogResponseBody &&) = default ;
    RealTimeDialogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealTimeDialogResponseBody() = default ;
    RealTimeDialogResponseBody& operator=(const RealTimeDialogResponseBody &) = default ;
    RealTimeDialogResponseBody& operator=(RealTimeDialogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->choices_ == nullptr
        && return this->created_ == nullptr && return this->id_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // choices Field Functions 
    bool hasChoices() const { return this->choices_ != nullptr;};
    void deleteChoices() { this->choices_ = nullptr;};
    inline const vector<RealTimeDialogResponseBodyChoices> & choices() const { DARABONBA_PTR_GET_CONST(choices_, vector<RealTimeDialogResponseBodyChoices>) };
    inline vector<RealTimeDialogResponseBodyChoices> choices() { DARABONBA_PTR_GET(choices_, vector<RealTimeDialogResponseBodyChoices>) };
    inline RealTimeDialogResponseBody& setChoices(const vector<RealTimeDialogResponseBodyChoices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
    inline RealTimeDialogResponseBody& setChoices(vector<RealTimeDialogResponseBodyChoices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline RealTimeDialogResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RealTimeDialogResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RealTimeDialogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RealTimeDialogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<RealTimeDialogResponseBodyChoices>> choices_ = nullptr;
    std::shared_ptr<string> created_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
