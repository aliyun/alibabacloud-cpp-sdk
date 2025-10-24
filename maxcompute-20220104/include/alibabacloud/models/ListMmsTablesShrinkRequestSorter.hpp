// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTABLESSHRINKREQUESTSORTER_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTABLESSHRINKREQUESTSORTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTablesShrinkRequestSorter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTablesShrinkRequestSorter& obj) { 
      DARABONBA_PTR_TO_JSON(lastDdlTime, lastDdlTime_);
      DARABONBA_PTR_TO_JSON(numRows, numRows_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTablesShrinkRequestSorter& obj) { 
      DARABONBA_PTR_FROM_JSON(lastDdlTime, lastDdlTime_);
      DARABONBA_PTR_FROM_JSON(numRows, numRows_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ListMmsTablesShrinkRequestSorter() = default ;
    ListMmsTablesShrinkRequestSorter(const ListMmsTablesShrinkRequestSorter &) = default ;
    ListMmsTablesShrinkRequestSorter(ListMmsTablesShrinkRequestSorter &&) = default ;
    ListMmsTablesShrinkRequestSorter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTablesShrinkRequestSorter() = default ;
    ListMmsTablesShrinkRequestSorter& operator=(const ListMmsTablesShrinkRequestSorter &) = default ;
    ListMmsTablesShrinkRequestSorter& operator=(ListMmsTablesShrinkRequestSorter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastDdlTime_ == nullptr
        && return this->numRows_ == nullptr && return this->size_ == nullptr; };
    // lastDdlTime Field Functions 
    bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
    void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
    inline string lastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
    inline ListMmsTablesShrinkRequestSorter& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


    // numRows Field Functions 
    bool hasNumRows() const { return this->numRows_ != nullptr;};
    void deleteNumRows() { this->numRows_ = nullptr;};
    inline string numRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, "") };
    inline ListMmsTablesShrinkRequestSorter& setNumRows(string numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline ListMmsTablesShrinkRequestSorter& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> lastDdlTime_ = nullptr;
    std::shared_ptr<string> numRows_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
