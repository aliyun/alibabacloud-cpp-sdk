// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSRESPONSEBODYCASTERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSRESPONSEBODYCASTERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCastersResponseBodyCasterListCaster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCastersResponseBodyCasterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCastersResponseBodyCasterList& obj) { 
      DARABONBA_PTR_TO_JSON(Caster, caster_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCastersResponseBodyCasterList& obj) { 
      DARABONBA_PTR_FROM_JSON(Caster, caster_);
    };
    DescribeCastersResponseBodyCasterList() = default ;
    DescribeCastersResponseBodyCasterList(const DescribeCastersResponseBodyCasterList &) = default ;
    DescribeCastersResponseBodyCasterList(DescribeCastersResponseBodyCasterList &&) = default ;
    DescribeCastersResponseBodyCasterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCastersResponseBodyCasterList() = default ;
    DescribeCastersResponseBodyCasterList& operator=(const DescribeCastersResponseBodyCasterList &) = default ;
    DescribeCastersResponseBodyCasterList& operator=(DescribeCastersResponseBodyCasterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caster_ != nullptr; };
    // caster Field Functions 
    bool hasCaster() const { return this->caster_ != nullptr;};
    void deleteCaster() { this->caster_ = nullptr;};
    inline const vector<Models::DescribeCastersResponseBodyCasterListCaster> & caster() const { DARABONBA_PTR_GET_CONST(caster_, vector<Models::DescribeCastersResponseBodyCasterListCaster>) };
    inline vector<Models::DescribeCastersResponseBodyCasterListCaster> caster() { DARABONBA_PTR_GET(caster_, vector<Models::DescribeCastersResponseBodyCasterListCaster>) };
    inline DescribeCastersResponseBodyCasterList& setCaster(const vector<Models::DescribeCastersResponseBodyCasterListCaster> & caster) { DARABONBA_PTR_SET_VALUE(caster_, caster) };
    inline DescribeCastersResponseBodyCasterList& setCaster(vector<Models::DescribeCastersResponseBodyCasterListCaster> && caster) { DARABONBA_PTR_SET_RVALUE(caster_, caster) };


  protected:
    std::shared_ptr<vector<Models::DescribeCastersResponseBodyCasterListCaster>> caster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
