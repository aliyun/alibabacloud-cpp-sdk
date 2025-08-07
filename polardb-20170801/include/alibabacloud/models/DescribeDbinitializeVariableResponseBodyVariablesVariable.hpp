// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINITIALIZEVARIABLERESPONSEBODYVARIABLESVARIABLE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINITIALIZEVARIABLERESPONSEBODYVARIABLESVARIABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBInitializeVariableResponseBodyVariablesVariable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInitializeVariableResponseBodyVariablesVariable& obj) { 
      DARABONBA_PTR_TO_JSON(Charset, charset_);
      DARABONBA_PTR_TO_JSON(Collate, collate_);
      DARABONBA_PTR_TO_JSON(Ctype, ctype_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInitializeVariableResponseBodyVariablesVariable& obj) { 
      DARABONBA_PTR_FROM_JSON(Charset, charset_);
      DARABONBA_PTR_FROM_JSON(Collate, collate_);
      DARABONBA_PTR_FROM_JSON(Ctype, ctype_);
    };
    DescribeDBInitializeVariableResponseBodyVariablesVariable() = default ;
    DescribeDBInitializeVariableResponseBodyVariablesVariable(const DescribeDBInitializeVariableResponseBodyVariablesVariable &) = default ;
    DescribeDBInitializeVariableResponseBodyVariablesVariable(DescribeDBInitializeVariableResponseBodyVariablesVariable &&) = default ;
    DescribeDBInitializeVariableResponseBodyVariablesVariable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInitializeVariableResponseBodyVariablesVariable() = default ;
    DescribeDBInitializeVariableResponseBodyVariablesVariable& operator=(const DescribeDBInitializeVariableResponseBodyVariablesVariable &) = default ;
    DescribeDBInitializeVariableResponseBodyVariablesVariable& operator=(DescribeDBInitializeVariableResponseBodyVariablesVariable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->charset_ != nullptr
        && this->collate_ != nullptr && this->ctype_ != nullptr; };
    // charset Field Functions 
    bool hasCharset() const { return this->charset_ != nullptr;};
    void deleteCharset() { this->charset_ = nullptr;};
    inline string charset() const { DARABONBA_PTR_GET_DEFAULT(charset_, "") };
    inline DescribeDBInitializeVariableResponseBodyVariablesVariable& setCharset(string charset) { DARABONBA_PTR_SET_VALUE(charset_, charset) };


    // collate Field Functions 
    bool hasCollate() const { return this->collate_ != nullptr;};
    void deleteCollate() { this->collate_ = nullptr;};
    inline string collate() const { DARABONBA_PTR_GET_DEFAULT(collate_, "") };
    inline DescribeDBInitializeVariableResponseBodyVariablesVariable& setCollate(string collate) { DARABONBA_PTR_SET_VALUE(collate_, collate) };


    // ctype Field Functions 
    bool hasCtype() const { return this->ctype_ != nullptr;};
    void deleteCtype() { this->ctype_ = nullptr;};
    inline string ctype() const { DARABONBA_PTR_GET_DEFAULT(ctype_, "") };
    inline DescribeDBInitializeVariableResponseBodyVariablesVariable& setCtype(string ctype) { DARABONBA_PTR_SET_VALUE(ctype_, ctype) };


  protected:
    // The character set that is supported.
    std::shared_ptr<string> charset_ = nullptr;
    // The language that indicates the collation of the databases that are created.
    // 
    // >- The language must be compatible with the character set that is specified by **CharacterSetName**.
    // >- This parameter is required for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is optional for PolarDB for MySQL clusters.
    // 
    // To view the valid values for this parameter, perform the following steps: Log on to the PolarDB console and click the ID of a cluster. In the left-side navigation pane, choose **Settings and Management** > **Databases**. Then, click **Create Database**.
    std::shared_ptr<string> collate_ = nullptr;
    // The language that indicates the character type of the database.
    // 
    // > 
    // 
    // *   The language must be compatible with the character set that is specified by **CharacterSetName**.
    // 
    // *   The specified parameter value must be the same as the value of **Collate**.
    // 
    // *   If the PolarDB cluster runs PolarDB for PostgreSQL (Compatible with Oracle) or PolarDB for PostgreSQL, this parameter is required. If the cluster runs PolarDB for MySQL, this parameter is not supported.
    // 
    // To view the valid values of this parameter, perform the following steps: First, log on to the PolarDB console and click the ID of a cluster. Then, in the left-side navigation pane, choose **Settings and Management** > **Databases**. Finally, click **Create Database**.
    std::shared_ptr<string> ctype_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
