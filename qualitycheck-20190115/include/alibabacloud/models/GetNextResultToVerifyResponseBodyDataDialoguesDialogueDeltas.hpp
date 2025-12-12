// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODYDATADIALOGUESDIALOGUEDELTAS_HPP_
#define ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODYDATADIALOGUESDIALOGUEDELTAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas& obj) { 
      DARABONBA_PTR_TO_JSON(Delta, delta_);
    };
    friend void from_json(const Darabonba::Json& j, GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas& obj) { 
      DARABONBA_PTR_FROM_JSON(Delta, delta_);
    };
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas() = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas(const GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas &) = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas(GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas &&) = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas() = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas& operator=(const GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas &) = default ;
    GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas& operator=(GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delta_ == nullptr; };
    // delta Field Functions 
    bool hasDelta() const { return this->delta_ != nullptr;};
    void deleteDelta() { this->delta_ = nullptr;};
    inline const vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta> & delta() const { DARABONBA_PTR_GET_CONST(delta_, vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta>) };
    inline vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta> delta() { DARABONBA_PTR_GET(delta_, vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta>) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas& setDelta(const vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta> & delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };
    inline GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltas& setDelta(vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta> && delta) { DARABONBA_PTR_SET_RVALUE(delta_, delta) };


  protected:
    std::shared_ptr<vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogueDeltasDelta>> delta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
