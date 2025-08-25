// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODYDATALISTSUMMARYINDEX_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODYDATALISTSUMMARYINDEX_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex& obj) { 
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex& obj) { 
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
    };
    ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex() = default ;
    ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex(const ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex &) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex(ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex &&) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex() = default ;
    ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex& operator=(const ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex &) = default ;
    ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex& operator=(ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keywords_ != nullptr; };
    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string keywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline ListCallDetailRecordsV2ResponseBodyDataListSummaryIndex& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


  protected:
    std::shared_ptr<string> keywords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
