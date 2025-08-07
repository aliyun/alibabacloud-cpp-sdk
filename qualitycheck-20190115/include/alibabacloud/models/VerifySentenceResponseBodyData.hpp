// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_VERIFYSENTENCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VerifySentenceResponseBodyDataDelta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class VerifySentenceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifySentenceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Delta, delta_);
    };
    friend void from_json(const Darabonba::Json& j, VerifySentenceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Delta, delta_);
    };
    VerifySentenceResponseBodyData() = default ;
    VerifySentenceResponseBodyData(const VerifySentenceResponseBodyData &) = default ;
    VerifySentenceResponseBodyData(VerifySentenceResponseBodyData &&) = default ;
    VerifySentenceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifySentenceResponseBodyData() = default ;
    VerifySentenceResponseBodyData& operator=(const VerifySentenceResponseBodyData &) = default ;
    VerifySentenceResponseBodyData& operator=(VerifySentenceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delta_ != nullptr; };
    // delta Field Functions 
    bool hasDelta() const { return this->delta_ != nullptr;};
    void deleteDelta() { this->delta_ = nullptr;};
    inline const vector<Models::VerifySentenceResponseBodyDataDelta> & delta() const { DARABONBA_PTR_GET_CONST(delta_, vector<Models::VerifySentenceResponseBodyDataDelta>) };
    inline vector<Models::VerifySentenceResponseBodyDataDelta> delta() { DARABONBA_PTR_GET(delta_, vector<Models::VerifySentenceResponseBodyDataDelta>) };
    inline VerifySentenceResponseBodyData& setDelta(const vector<Models::VerifySentenceResponseBodyDataDelta> & delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };
    inline VerifySentenceResponseBodyData& setDelta(vector<Models::VerifySentenceResponseBodyDataDelta> && delta) { DARABONBA_PTR_SET_RVALUE(delta_, delta) };


  protected:
    std::shared_ptr<vector<Models::VerifySentenceResponseBodyDataDelta>> delta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
