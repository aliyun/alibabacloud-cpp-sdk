// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIOPERATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIOPERATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHttpApiOperationResponseBodyDataOperations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiOperationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiOperationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(operations, operations_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiOperationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(operations, operations_);
    };
    CreateHttpApiOperationResponseBodyData() = default ;
    CreateHttpApiOperationResponseBodyData(const CreateHttpApiOperationResponseBodyData &) = default ;
    CreateHttpApiOperationResponseBodyData(CreateHttpApiOperationResponseBodyData &&) = default ;
    CreateHttpApiOperationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiOperationResponseBodyData() = default ;
    CreateHttpApiOperationResponseBodyData& operator=(const CreateHttpApiOperationResponseBodyData &) = default ;
    CreateHttpApiOperationResponseBodyData& operator=(CreateHttpApiOperationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operations_ != nullptr; };
    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<Models::CreateHttpApiOperationResponseBodyDataOperations> & operations() const { DARABONBA_PTR_GET_CONST(operations_, vector<Models::CreateHttpApiOperationResponseBodyDataOperations>) };
    inline vector<Models::CreateHttpApiOperationResponseBodyDataOperations> operations() { DARABONBA_PTR_GET(operations_, vector<Models::CreateHttpApiOperationResponseBodyDataOperations>) };
    inline CreateHttpApiOperationResponseBodyData& setOperations(const vector<Models::CreateHttpApiOperationResponseBodyDataOperations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline CreateHttpApiOperationResponseBodyData& setOperations(vector<Models::CreateHttpApiOperationResponseBodyDataOperations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


  protected:
    // Operation information.
    std::shared_ptr<vector<Models::CreateHttpApiOperationResponseBodyDataOperations>> operations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
