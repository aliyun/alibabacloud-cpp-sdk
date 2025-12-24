// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREPLAYBOOKSRESPONSEBODYCOMPARERESULT_HPP_
#define ALIBABACLOUD_MODELS_COMPAREPLAYBOOKSRESPONSEBODYCOMPARERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class ComparePlaybooksResponseBodyCompareResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComparePlaybooksResponseBodyCompareResult& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(New, new_);
      DARABONBA_PTR_TO_JSON(Same, same_);
    };
    friend void from_json(const Darabonba::Json& j, ComparePlaybooksResponseBodyCompareResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(New, new_);
      DARABONBA_PTR_FROM_JSON(Same, same_);
    };
    ComparePlaybooksResponseBodyCompareResult() = default ;
    ComparePlaybooksResponseBodyCompareResult(const ComparePlaybooksResponseBodyCompareResult &) = default ;
    ComparePlaybooksResponseBodyCompareResult(ComparePlaybooksResponseBodyCompareResult &&) = default ;
    ComparePlaybooksResponseBodyCompareResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComparePlaybooksResponseBodyCompareResult() = default ;
    ComparePlaybooksResponseBodyCompareResult& operator=(const ComparePlaybooksResponseBodyCompareResult &) = default ;
    ComparePlaybooksResponseBodyCompareResult& operator=(ComparePlaybooksResponseBodyCompareResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->new_ == nullptr && return this->same_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ComparePlaybooksResponseBodyCompareResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // new Field Functions 
    bool hasNew() const { return this->new_ != nullptr;};
    void deleteNew() { this->new_ = nullptr;};
    inline bool _new() const { DARABONBA_PTR_GET_DEFAULT(new_, false) };
    inline ComparePlaybooksResponseBodyCompareResult& setNew(bool _new) { DARABONBA_PTR_SET_VALUE(new_, _new) };


    // same Field Functions 
    bool hasSame() const { return this->same_ != nullptr;};
    void deleteSame() { this->same_ = nullptr;};
    inline bool same() const { DARABONBA_PTR_GET_DEFAULT(same_, false) };
    inline ComparePlaybooksResponseBodyCompareResult& setSame(bool same) { DARABONBA_PTR_SET_VALUE(same_, same) };


  protected:
    // The description of the comparison result.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the second version provides more information than the first version. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> new_ = nullptr;
    // Indicates whether the configurations of the two versions are the same. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> same_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
