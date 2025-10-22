// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIRFLOWRESPONSEBODYROOT_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIRFLOWRESPONSEBODYROOT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteAirflowResponseBodyRootResponses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteAirflowResponseBodyRoot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAirflowResponseBodyRoot& obj) { 
      DARABONBA_PTR_TO_JSON(Responses, responses_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAirflowResponseBodyRoot& obj) { 
      DARABONBA_PTR_FROM_JSON(Responses, responses_);
    };
    DeleteAirflowResponseBodyRoot() = default ;
    DeleteAirflowResponseBodyRoot(const DeleteAirflowResponseBodyRoot &) = default ;
    DeleteAirflowResponseBodyRoot(DeleteAirflowResponseBodyRoot &&) = default ;
    DeleteAirflowResponseBodyRoot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAirflowResponseBodyRoot() = default ;
    DeleteAirflowResponseBodyRoot& operator=(const DeleteAirflowResponseBodyRoot &) = default ;
    DeleteAirflowResponseBodyRoot& operator=(DeleteAirflowResponseBodyRoot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->responses_ == nullptr; };
    // responses Field Functions 
    bool hasResponses() const { return this->responses_ != nullptr;};
    void deleteResponses() { this->responses_ = nullptr;};
    inline const vector<Models::DeleteAirflowResponseBodyRootResponses> & responses() const { DARABONBA_PTR_GET_CONST(responses_, vector<Models::DeleteAirflowResponseBodyRootResponses>) };
    inline vector<Models::DeleteAirflowResponseBodyRootResponses> responses() { DARABONBA_PTR_GET(responses_, vector<Models::DeleteAirflowResponseBodyRootResponses>) };
    inline DeleteAirflowResponseBodyRoot& setResponses(const vector<Models::DeleteAirflowResponseBodyRootResponses> & responses) { DARABONBA_PTR_SET_VALUE(responses_, responses) };
    inline DeleteAirflowResponseBodyRoot& setResponses(vector<Models::DeleteAirflowResponseBodyRootResponses> && responses) { DARABONBA_PTR_SET_RVALUE(responses_, responses) };


  protected:
    std::shared_ptr<vector<Models::DeleteAirflowResponseBodyRootResponses>> responses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
