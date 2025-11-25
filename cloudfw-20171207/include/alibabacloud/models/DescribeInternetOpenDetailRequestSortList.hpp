// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENDETAILREQUESTSORTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENDETAILREQUESTSORTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetOpenDetailRequestSortList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenDetailRequestSortList& obj) { 
      DARABONBA_PTR_TO_JSON(Dir, dir_);
      DARABONBA_PTR_TO_JSON(SortKey, sortKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenDetailRequestSortList& obj) { 
      DARABONBA_PTR_FROM_JSON(Dir, dir_);
      DARABONBA_PTR_FROM_JSON(SortKey, sortKey_);
    };
    DescribeInternetOpenDetailRequestSortList() = default ;
    DescribeInternetOpenDetailRequestSortList(const DescribeInternetOpenDetailRequestSortList &) = default ;
    DescribeInternetOpenDetailRequestSortList(DescribeInternetOpenDetailRequestSortList &&) = default ;
    DescribeInternetOpenDetailRequestSortList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenDetailRequestSortList() = default ;
    DescribeInternetOpenDetailRequestSortList& operator=(const DescribeInternetOpenDetailRequestSortList &) = default ;
    DescribeInternetOpenDetailRequestSortList& operator=(DescribeInternetOpenDetailRequestSortList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dir_ == nullptr
        && return this->sortKey_ == nullptr; };
    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline string dir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
    inline DescribeInternetOpenDetailRequestSortList& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // sortKey Field Functions 
    bool hasSortKey() const { return this->sortKey_ != nullptr;};
    void deleteSortKey() { this->sortKey_ = nullptr;};
    inline string sortKey() const { DARABONBA_PTR_GET_DEFAULT(sortKey_, "") };
    inline DescribeInternetOpenDetailRequestSortList& setSortKey(string sortKey) { DARABONBA_PTR_SET_VALUE(sortKey_, sortKey) };


  protected:
    std::shared_ptr<string> dir_ = nullptr;
    std::shared_ptr<string> sortKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
