// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGESETDETAILSRESPONSEBODYDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGESETDETAILSRESPONSEBODYDISKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStorageSetDetailsResponseBodyDisksDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeStorageSetDetailsResponseBodyDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageSetDetailsResponseBodyDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Disk, disk_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageSetDetailsResponseBodyDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Disk, disk_);
    };
    DescribeStorageSetDetailsResponseBodyDisks() = default ;
    DescribeStorageSetDetailsResponseBodyDisks(const DescribeStorageSetDetailsResponseBodyDisks &) = default ;
    DescribeStorageSetDetailsResponseBodyDisks(DescribeStorageSetDetailsResponseBodyDisks &&) = default ;
    DescribeStorageSetDetailsResponseBodyDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageSetDetailsResponseBodyDisks() = default ;
    DescribeStorageSetDetailsResponseBodyDisks& operator=(const DescribeStorageSetDetailsResponseBodyDisks &) = default ;
    DescribeStorageSetDetailsResponseBodyDisks& operator=(DescribeStorageSetDetailsResponseBodyDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disk_ != nullptr; };
    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline const vector<Models::DescribeStorageSetDetailsResponseBodyDisksDisk> & disk() const { DARABONBA_PTR_GET_CONST(disk_, vector<Models::DescribeStorageSetDetailsResponseBodyDisksDisk>) };
    inline vector<Models::DescribeStorageSetDetailsResponseBodyDisksDisk> disk() { DARABONBA_PTR_GET(disk_, vector<Models::DescribeStorageSetDetailsResponseBodyDisksDisk>) };
    inline DescribeStorageSetDetailsResponseBodyDisks& setDisk(const vector<Models::DescribeStorageSetDetailsResponseBodyDisksDisk> & disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };
    inline DescribeStorageSetDetailsResponseBodyDisks& setDisk(vector<Models::DescribeStorageSetDetailsResponseBodyDisksDisk> && disk) { DARABONBA_PTR_SET_RVALUE(disk_, disk) };


  protected:
    std::shared_ptr<vector<Models::DescribeStorageSetDetailsResponseBodyDisksDisk>> disk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
