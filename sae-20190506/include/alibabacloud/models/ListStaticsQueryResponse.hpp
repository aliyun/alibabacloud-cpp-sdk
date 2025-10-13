// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTATICSQUERYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTSTATICSQUERYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StaticsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListStaticsQueryResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStaticsQueryResponse& obj) { 
      DARABONBA_PTR_TO_JSON(length, length_);
      DARABONBA_PTR_TO_JSON(sort, sort_);
      DARABONBA_PTR_TO_JSON(statics, statics_);
    };
    friend void from_json(const Darabonba::Json& j, ListStaticsQueryResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(length, length_);
      DARABONBA_PTR_FROM_JSON(sort, sort_);
      DARABONBA_PTR_FROM_JSON(statics, statics_);
    };
    ListStaticsQueryResponse() = default ;
    ListStaticsQueryResponse(const ListStaticsQueryResponse &) = default ;
    ListStaticsQueryResponse(ListStaticsQueryResponse &&) = default ;
    ListStaticsQueryResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStaticsQueryResponse() = default ;
    ListStaticsQueryResponse& operator=(const ListStaticsQueryResponse &) = default ;
    ListStaticsQueryResponse& operator=(ListStaticsQueryResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->length_ == nullptr
        && return this->sort_ == nullptr && return this->statics_ == nullptr; };
    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int64_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0L) };
    inline ListStaticsQueryResponse& setLength(int64_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListStaticsQueryResponse& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // statics Field Functions 
    bool hasStatics() const { return this->statics_ != nullptr;};
    void deleteStatics() { this->statics_ = nullptr;};
    inline const vector<StaticsInfo> & statics() const { DARABONBA_PTR_GET_CONST(statics_, vector<StaticsInfo>) };
    inline vector<StaticsInfo> statics() { DARABONBA_PTR_GET(statics_, vector<StaticsInfo>) };
    inline ListStaticsQueryResponse& setStatics(const vector<StaticsInfo> & statics) { DARABONBA_PTR_SET_VALUE(statics_, statics) };
    inline ListStaticsQueryResponse& setStatics(vector<StaticsInfo> && statics) { DARABONBA_PTR_SET_RVALUE(statics_, statics) };


  protected:
    std::shared_ptr<int64_t> length_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    std::shared_ptr<vector<StaticsInfo>> statics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
