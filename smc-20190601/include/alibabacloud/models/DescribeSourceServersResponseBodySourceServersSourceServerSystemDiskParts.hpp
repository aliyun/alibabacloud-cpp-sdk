// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERSYSTEMDISKPARTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERSYSTEMDISKPARTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts& obj) { 
      DARABONBA_PTR_TO_JSON(SystemDiskPart, systemDiskPart_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemDiskPart, systemDiskPart_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts(const DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts(DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts& operator=(const DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts& operator=(DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->systemDiskPart_ != nullptr; };
    // systemDiskPart Field Functions 
    bool hasSystemDiskPart() const { return this->systemDiskPart_ != nullptr;};
    void deleteSystemDiskPart() { this->systemDiskPart_ = nullptr;};
    inline const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart> & systemDiskPart() const { DARABONBA_PTR_GET_CONST(systemDiskPart_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart>) };
    inline vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart> systemDiskPart() { DARABONBA_PTR_GET(systemDiskPart_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart>) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts& setSystemDiskPart(const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart> & systemDiskPart) { DARABONBA_PTR_SET_VALUE(systemDiskPart_, systemDiskPart) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts& setSystemDiskPart(vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart> && systemDiskPart) { DARABONBA_PTR_SET_RVALUE(systemDiskPart_, systemDiskPart) };


  protected:
    std::shared_ptr<vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart>> systemDiskPart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
