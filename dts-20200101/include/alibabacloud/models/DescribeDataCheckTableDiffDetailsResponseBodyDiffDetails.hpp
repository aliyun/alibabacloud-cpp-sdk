// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDIFFDETAILSRESPONSEBODYDIFFDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDIFFDETAILSRESPONSEBODYDIFFDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Diff, diff_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Diff, diff_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails() = default ;
    DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails(const DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails &) = default ;
    DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails(DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails &&) = default ;
    DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails() = default ;
    DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails& operator=(const DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails &) = default ;
    DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails& operator=(DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diff_ != nullptr
        && this->gmtCreated_ != nullptr && this->id_ != nullptr; };
    // diff Field Functions 
    bool hasDiff() const { return this->diff_ != nullptr;};
    void deleteDiff() { this->diff_ = nullptr;};
    inline string diff() const { DARABONBA_PTR_GET_DEFAULT(diff_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails& setDiff(string diff) { DARABONBA_PTR_SET_VALUE(diff_, diff) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDataCheckTableDiffDetailsResponseBodyDiffDetails& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The details of the inconsistent data, whose value is a JSON string. The JSON string contains the following parameters:
    // 
    // *   column: the name of the field.
    // *   source: the value of the field in the source database.
    // *   dest: the value of the field in the destination database.
    // *   isPrimary: indicates whether the field is a primary key.
    std::shared_ptr<string> diff_ = nullptr;
    // The time when the data verification was performed.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The auto-increment primary key that is used to identify the data in a verification result.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
