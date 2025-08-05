// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSDBSREQUESTSORTER_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSDBSREQUESTSORTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsDbsRequestSorter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsDbsRequestSorter& obj) { 
      DARABONBA_PTR_TO_JSON(numRows, numRows_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsDbsRequestSorter& obj) { 
      DARABONBA_PTR_FROM_JSON(numRows, numRows_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ListMmsDbsRequestSorter() = default ;
    ListMmsDbsRequestSorter(const ListMmsDbsRequestSorter &) = default ;
    ListMmsDbsRequestSorter(ListMmsDbsRequestSorter &&) = default ;
    ListMmsDbsRequestSorter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsDbsRequestSorter() = default ;
    ListMmsDbsRequestSorter& operator=(const ListMmsDbsRequestSorter &) = default ;
    ListMmsDbsRequestSorter& operator=(ListMmsDbsRequestSorter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->numRows_ != nullptr
        && this->size_ != nullptr && this->updateTime_ != nullptr; };
    // numRows Field Functions 
    bool hasNumRows() const { return this->numRows_ != nullptr;};
    void deleteNumRows() { this->numRows_ = nullptr;};
    inline string numRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, "") };
    inline ListMmsDbsRequestSorter& setNumRows(string numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline ListMmsDbsRequestSorter& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListMmsDbsRequestSorter& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> numRows_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
