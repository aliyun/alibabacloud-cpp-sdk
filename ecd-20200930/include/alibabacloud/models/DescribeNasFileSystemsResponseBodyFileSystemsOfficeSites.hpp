// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSRESPONSEBODYFILESYSTEMSOFFICESITES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSRESPONSEBODYFILESYSTEMSOFFICESITES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites& obj) { 
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites& obj) { 
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
    };
    DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites() = default ;
    DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites(const DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites &) = default ;
    DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites(DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites &&) = default ;
    DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites() = default ;
    DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites& operator=(const DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites &) = default ;
    DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites& operator=(DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->officeSiteId_ == nullptr
        && return this->officeSiteName_ == nullptr; };
    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline DescribeNASFileSystemsResponseBodyFileSystemsOfficeSites& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


  protected:
    // The ID of the office network.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The name of the office network.
    std::shared_ptr<string> officeSiteName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
