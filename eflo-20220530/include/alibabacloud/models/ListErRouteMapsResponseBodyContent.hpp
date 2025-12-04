// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTERROUTEMAPSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTERROUTEMAPSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListErRouteMapsResponseBodyContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListErRouteMapsResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListErRouteMapsResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListErRouteMapsResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListErRouteMapsResponseBodyContent() = default ;
    ListErRouteMapsResponseBodyContent(const ListErRouteMapsResponseBodyContent &) = default ;
    ListErRouteMapsResponseBodyContent(ListErRouteMapsResponseBodyContent &&) = default ;
    ListErRouteMapsResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListErRouteMapsResponseBodyContent() = default ;
    ListErRouteMapsResponseBodyContent& operator=(const ListErRouteMapsResponseBodyContent &) = default ;
    ListErRouteMapsResponseBodyContent& operator=(ListErRouteMapsResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListErRouteMapsResponseBodyContentData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListErRouteMapsResponseBodyContentData>) };
    inline vector<Models::ListErRouteMapsResponseBodyContentData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListErRouteMapsResponseBodyContentData>) };
    inline ListErRouteMapsResponseBodyContent& setData(const vector<Models::ListErRouteMapsResponseBodyContentData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListErRouteMapsResponseBodyContent& setData(vector<Models::ListErRouteMapsResponseBodyContentData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListErRouteMapsResponseBodyContent& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // routing policy information list
    std::shared_ptr<vector<Models::ListErRouteMapsResponseBodyContentData>> data_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
