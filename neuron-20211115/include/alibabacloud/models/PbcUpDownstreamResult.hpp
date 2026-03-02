// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCUPDOWNSTREAMRESULT_HPP_
#define ALIBABACLOUD_MODELS_PBCUPDOWNSTREAMRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PbcRelationItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcUpDownstreamResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcUpDownstreamResult& obj) { 
      DARABONBA_PTR_TO_JSON(pbcItems, pbcItems_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PbcUpDownstreamResult& obj) { 
      DARABONBA_PTR_FROM_JSON(pbcItems, pbcItems_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PbcUpDownstreamResult() = default ;
    PbcUpDownstreamResult(const PbcUpDownstreamResult &) = default ;
    PbcUpDownstreamResult(PbcUpDownstreamResult &&) = default ;
    PbcUpDownstreamResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcUpDownstreamResult() = default ;
    PbcUpDownstreamResult& operator=(const PbcUpDownstreamResult &) = default ;
    PbcUpDownstreamResult& operator=(PbcUpDownstreamResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pbcItems_ == nullptr
        && this->requestId_ == nullptr; };
    // pbcItems Field Functions 
    bool hasPbcItems() const { return this->pbcItems_ != nullptr;};
    void deletePbcItems() { this->pbcItems_ = nullptr;};
    inline const vector<PbcRelationItem> & getPbcItems() const { DARABONBA_PTR_GET_CONST(pbcItems_, vector<PbcRelationItem>) };
    inline vector<PbcRelationItem> getPbcItems() { DARABONBA_PTR_GET(pbcItems_, vector<PbcRelationItem>) };
    inline PbcUpDownstreamResult& setPbcItems(const vector<PbcRelationItem> & pbcItems) { DARABONBA_PTR_SET_VALUE(pbcItems_, pbcItems) };
    inline PbcUpDownstreamResult& setPbcItems(vector<PbcRelationItem> && pbcItems) { DARABONBA_PTR_SET_RVALUE(pbcItems_, pbcItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PbcUpDownstreamResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<PbcRelationItem>> pbcItems_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
