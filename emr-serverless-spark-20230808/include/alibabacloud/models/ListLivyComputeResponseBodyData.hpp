// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVYCOMPUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVYCOMPUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLivyComputeResponseBodyDataLivyComputes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListLivyComputeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLivyComputeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(livyComputes, livyComputes_);
    };
    friend void from_json(const Darabonba::Json& j, ListLivyComputeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(livyComputes, livyComputes_);
    };
    ListLivyComputeResponseBodyData() = default ;
    ListLivyComputeResponseBodyData(const ListLivyComputeResponseBodyData &) = default ;
    ListLivyComputeResponseBodyData(ListLivyComputeResponseBodyData &&) = default ;
    ListLivyComputeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLivyComputeResponseBodyData() = default ;
    ListLivyComputeResponseBodyData& operator=(const ListLivyComputeResponseBodyData &) = default ;
    ListLivyComputeResponseBodyData& operator=(ListLivyComputeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->livyComputes_ != nullptr; };
    // livyComputes Field Functions 
    bool hasLivyComputes() const { return this->livyComputes_ != nullptr;};
    void deleteLivyComputes() { this->livyComputes_ = nullptr;};
    inline const vector<Models::ListLivyComputeResponseBodyDataLivyComputes> & livyComputes() const { DARABONBA_PTR_GET_CONST(livyComputes_, vector<Models::ListLivyComputeResponseBodyDataLivyComputes>) };
    inline vector<Models::ListLivyComputeResponseBodyDataLivyComputes> livyComputes() { DARABONBA_PTR_GET(livyComputes_, vector<Models::ListLivyComputeResponseBodyDataLivyComputes>) };
    inline ListLivyComputeResponseBodyData& setLivyComputes(const vector<Models::ListLivyComputeResponseBodyDataLivyComputes> & livyComputes) { DARABONBA_PTR_SET_VALUE(livyComputes_, livyComputes) };
    inline ListLivyComputeResponseBodyData& setLivyComputes(vector<Models::ListLivyComputeResponseBodyDataLivyComputes> && livyComputes) { DARABONBA_PTR_SET_RVALUE(livyComputes_, livyComputes) };


  protected:
    std::shared_ptr<vector<Models::ListLivyComputeResponseBodyDataLivyComputes>> livyComputes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
