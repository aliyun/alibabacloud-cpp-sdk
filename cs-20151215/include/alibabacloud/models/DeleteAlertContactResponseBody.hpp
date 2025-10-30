// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTCONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTCONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteAlertContactResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteAlertContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    DeleteAlertContactResponseBody() = default ;
    DeleteAlertContactResponseBody(const DeleteAlertContactResponseBody &) = default ;
    DeleteAlertContactResponseBody(DeleteAlertContactResponseBody &&) = default ;
    DeleteAlertContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertContactResponseBody() = default ;
    DeleteAlertContactResponseBody& operator=(const DeleteAlertContactResponseBody &) = default ;
    DeleteAlertContactResponseBody& operator=(DeleteAlertContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::DeleteAlertContactResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::DeleteAlertContactResponseBodyResult>) };
    inline vector<Models::DeleteAlertContactResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<Models::DeleteAlertContactResponseBodyResult>) };
    inline DeleteAlertContactResponseBody& setResult(const vector<Models::DeleteAlertContactResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DeleteAlertContactResponseBody& setResult(vector<Models::DeleteAlertContactResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<vector<Models::DeleteAlertContactResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
