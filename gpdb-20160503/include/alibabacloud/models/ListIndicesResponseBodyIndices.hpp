// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODYINDICES_HPP_
#define ALIBABACLOUD_MODELS_LISTINDICESRESPONSEBODYINDICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIndicesResponseBodyIndicesIndices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListIndicesResponseBodyIndices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndicesResponseBodyIndices& obj) { 
      DARABONBA_PTR_TO_JSON(Indices, indices_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndicesResponseBodyIndices& obj) { 
      DARABONBA_PTR_FROM_JSON(Indices, indices_);
    };
    ListIndicesResponseBodyIndices() = default ;
    ListIndicesResponseBodyIndices(const ListIndicesResponseBodyIndices &) = default ;
    ListIndicesResponseBodyIndices(ListIndicesResponseBodyIndices &&) = default ;
    ListIndicesResponseBodyIndices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndicesResponseBodyIndices() = default ;
    ListIndicesResponseBodyIndices& operator=(const ListIndicesResponseBodyIndices &) = default ;
    ListIndicesResponseBodyIndices& operator=(ListIndicesResponseBodyIndices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indices_ != nullptr; };
    // indices Field Functions 
    bool hasIndices() const { return this->indices_ != nullptr;};
    void deleteIndices() { this->indices_ = nullptr;};
    inline const vector<Models::ListIndicesResponseBodyIndicesIndices> & indices() const { DARABONBA_PTR_GET_CONST(indices_, vector<Models::ListIndicesResponseBodyIndicesIndices>) };
    inline vector<Models::ListIndicesResponseBodyIndicesIndices> indices() { DARABONBA_PTR_GET(indices_, vector<Models::ListIndicesResponseBodyIndicesIndices>) };
    inline ListIndicesResponseBodyIndices& setIndices(const vector<Models::ListIndicesResponseBodyIndicesIndices> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
    inline ListIndicesResponseBodyIndices& setIndices(vector<Models::ListIndicesResponseBodyIndicesIndices> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


  protected:
    std::shared_ptr<vector<Models::ListIndicesResponseBodyIndicesIndices>> indices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
